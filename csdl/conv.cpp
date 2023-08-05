#include <iostream>
#include <cstring>
#include <cmath>

template<typename T>
class Stack
{
    public:
    Stack (int Capacity = 100)
    {
        theArray = new T[Capacity];
        TopOfStack = NULL;
    }

    ~Stack()
    {
        delete[] theArray;
    }

    int getSize()
    {
        return TopOfStack + 1;
    }

    bool empty()
    {
        return (TopOfStack == -1);
    }

    void push(T e)
    {
        TopOfStack++;
        theArray[TopOfStack] = e;
    }

    void pop()
    {
        TopOfStack--;
    }

    T top()
    {
        return theArray[TopOfStack];
    }

    void print() 
    {
        for (int i = TopOfStack; i >= 0; i--) 
        {
            std::cout << theArray[i] << " ";
        }
        std::cout << std::endl;        
    }

    bool check(T x) 
    {
        for (int i = TopOfStack; i >= 0; i--)
        {
            if (x == theArray[i])
            {
                std::cout << "1" << std::endl;
                return true;
            }
        }
        std::cout << "0" << std::endl;
        return false;
    }

    private:
    struct Node
    {
        T elem;
        Node *next;
        Node(T e, Node *n)
        {
            elem = e;
            next = n;
        }
    };

    T *theArray;
    int TopOfStack;    
};    


// Kiem tra muc do uu tien cua toan tu
int Priority(char rx) {
    /*
    * Kiem tra tung ki tu trong xau bieu thuc
    * va tra ve muc do uu tien.
    */

    if (rx == '(') {
        return 1;
    } else if (rx == '+' || rx == '-') {
        return 2;
    } else if (rx == '*' || rx == '/' || rx == '%') {
        return 3;
    } else if (rx == '^') {
        return 4;
    }
    
    // Trong truong hop khong thoa man dieu kien,
    // nao, return 5.
    return 5;
}

// Ham dua bieu thuc tu trung to sang hau to.
std::string conv(std::string a) {
    Stack<char> sdm;
    std::string str = "";
    int i = 0;

    while (i < a.length())
    {
        char n = a.at(i);
        if ('0' <= n && n <= '9' || n == '.') {
            str += n;
        } else if (n == ' ') {
            if (n == ')')
            {
                if (sdm.top() == '(') {
                    sdm.pop();
                } else {
                    while (sdm.top() != '(')
                    {
                        str += ' ';
                        str += sdm.top();
                        sdm.pop();
                    }

                    if (sdm.top() == '(')
                    {
                        sdm.pop();
                    }
                }   
            } else {
                while (!sdm.empty() && Priority(n) <= Priority(sdm.top()))
                {
                    str += ' ';
                    str += sdm.top();
                    sdm.pop();
                }
                sdm.push(n);
            }
            str += ' ';
        }
        i++;
    }

    while(!sdm.empty())
    {
        str += ' ';
        str += sdm.top();
        sdm.pop();
    }

    return str;
}

bool checkps1(char p[]) // Ham kiem tra ky tu p co phai 1 toan tu hay khong
{
     return strcmp(p, "+") == 0 || 
            strcmp(p, "-") == 0 || 
            strcmp(p, "*") == 0 || 
            strcmp(p, "/") == 0 || 
            strcmp(p, "^") == 0;
}

float calc(char A[]) // Ham tinh toan bieu thuc hau to
{
     Stack<double> msm;
     char *avc = strtok(A, " ");
     while (avc != NULL)
     {
          double c;
          if (checkps1(avc) == true)
          {
               double a = msm.top();
               msm.pop();
               
               double b = msm.top();
               msm.pop();
               
               if (strcmp(avc, "+") == 0) {
                    c = b + a;
               } else if (strcmp(avc, "-") == 0) {
                    c = b - a;
               } else if (strcmp(avc, "*") == 0) {
                    c = b * a;
               } else if (strcmp(avc, "/") == 0) {
                    c = b / a;
               } else if (strcmp(avc, "^") == 0) {
                    c = pow(b, a);
               }

               msm.push(c);
          }
          else
          {
               msm.push(atof(avc));
          }
          avc = strtok(NULL, " ");
     }
     return msm.top();
}

int main() {	
    char scsi[200];
    std::string x1;
    std::cout << "Nhap bieu thuc trung to: ";
    std::getline(std::cin, x1);

    std::string x2 = conv(x1);
    std::cout << "Bieu thuc sau khi duoc chuyen doi ve dang hau to: " << x2 << std::endl;

    for (int i = 0; i <= x1.length(); i++)
    {
        scsi[i] = x1[i];
    }
    
    std::cout << "Gia tri bieu thuc: " << calc(scsi) << std::endl;
    std::cout << std::endl;
    std::cout << "Halt!" << std::endl;
    return 0;
}
