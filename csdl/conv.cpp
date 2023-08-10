#include <iostream>
#include <cstring>
#include <cmath>

std::string conv(std::string S);
int Priority(char c);
double calc(char A[]);
bool check(char A[]);
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

int Priority(char pnx) // Ham tra ve gia tri uu tien cua toan tu
{
     if (pnx == '(') {
          return 0;
     } else if (pnx == '+' || pnx == '-') {
          return 1;
     } else if (pnx == '*' || pnx == '/') {
          return 2;
     } else if (pnx == '^') {
          return 3;
     // Trong truong hop khong thoa man dieu kien nao, tra ve -1.
     } else {
          return -1;
     }
}

std::string conv(std::string S) // Ham chuyen tu bieu thuc trung to sang hau to
{
     Stack<char> sdm;
     std::string q = "";
     int i = 0;
     while (i < S.length())
     {
          char c = S.at(i);
          if ('0' <= c && c <= '9' || c == '.') {
               q += c;
          } else if (c != ' ') {
               if (c == '(') {
                    sdm.push('(');
               } else {
                    if (c == ')') {
                         if (sdm.top() == '(') {
                              sdm.pop();
                         } else {
                              while (sdm.top() != '(') {
                                   q += ' ';
                                   q += sdm.top();
                                   sdm.pop();
                              } if (sdm.top() == '(') {
                                   sdm.pop();
                              }     
                         }
                    } else {
                         while (!sdm.empty() && Priority(c) <= Priority(sdm.top())) {
                              q += ' ';
                              q += sdm.top();
                              sdm.pop();
                         }
                         sdm.push(c);
                    }
               }
               q += ' ';
          }
          i++;
     }

     while (!sdm.empty()) {
          q += ' ';
          q += sdm.top();
          sdm.pop();
     }
     return q;
}

double calc(char bt[]) 
{
     Stack<double> msm;
     char *q = strtok(bt, " ");
     while (q != NULL)
     {
          double c;
          if (check(q) == true)
          {
               double a = msm.top();
               msm.pop();
               double b = msm.top();
               msm.pop();
               if (strcmp(q, "+") == 0) {
                    c = b + a;
               } else if (strcmp(q, "-") == 0) {
                    c = b - a;
               } else if (strcmp(q, "*") == 0) {
                    c = b * a;
               } else if (strcmp(q, "/") == 0) {
                    c = b / a;
               } else if (strcmp(q, "^") == 0) {
                    c = pow(b, a);
               }
               msm.push(c);
          } else {
               msm.push(atof(q));
          }
          q = strtok(NULL, " ");
     }
     return msm.top();
}

// Ham kiem tra ky tu p co phai 1 toan tu hay khong
bool check(char bt[]) 
{
     return strcmp(bt, "+") == 0 ||
            strcmp(bt, "-") == 0 || 
            strcmp(bt, "*") == 0 || 
            strcmp(bt, "/") == 0 || 
            strcmp(bt, "^") == 0;
}

int main()
{
     // Lam sach VS terminal truoc khi chay.
     system("clear");
     char z[300];
     std::string inp;
     std::cout << "Nhap bieu thuc (dang trung to): ";
     getline(std::cin, inp);
     std::string v = conv(inp);
     std::cout << std::endl;
     std::cout << "Post-fix conversion: " << v << std::endl;
     for (int i = 0; i < v.length(); i++)
     {
          z[i] = v[i];
     }
     std::cout << std::endl;
     std::cout << "Result: " << calc(z) << std::endl;
     return 0;
}