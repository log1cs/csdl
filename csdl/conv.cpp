#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

template<typename T>
class Stack
{
    public:
    Stack(int capacity = 100)
    {
        theArray = new T[capacity];
        // TopOfStack = 0 se gay ra warning*
        TopOfStack = 0;
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
        for (int i = TopOfStack; i >= 0; i--) {
            if (x == theArray[i]) {
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

// Ham kiem tra ky tu trong mang bt[] co phai 1 toan tu hay khong.
bool check(char bt[]) 
{
     return strcmp(bt, "+") == 0 ||
            strcmp(bt, "-") == 0 || 
            strcmp(bt, "*") == 0 || 
            strcmp(bt, "/") == 0 || 
            strcmp(bt, "^") == 0;
}

// Kiem tra do uu tien cua toan tu.
int Priority(char pnx)
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

/* Chuyen bieu thuc tu trung to sang hau to. */
std::string conv(std::string str, bool check)
{
     Stack<char> sdm;

     if (check == true) {
          std::replace(str.begin(), str.end(), ',', '.');
     }

     std::string q = "";
     int i = 0;
     while (i < str.length())
     {
          char n = str.at(i);
          if ('0' <= n && n <= '9' || n == '.' || n == ',') {
               q += n;
          } else if (n != ' ') {
               if (n == '(') {
                    sdm.push('(');
               } else {
                    if (n == ')') {
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
                         while (!sdm.empty() && Priority(n) <= Priority(sdm.top())) 
                         {
                              q += ' ';
                              q += sdm.top();
                              sdm.pop();
                         }
                         sdm.push(n);
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

int main()
{
     // Lam sach VS terminal truoc khi chay.
     system("clear");
     char z[300];
     std::string inp;
     std::cout << "Infix: ";
     getline(std::cin, inp);
     std::string v = conv(inp, true);

     std::string p = conv(inp, false);
     p.resize(p.size() - 1);

     std::cout << std::endl;
     std::cout << "Post-fix conversion: " << p << std::endl;
     for (int i = 0; i < v.length(); i++)
     {
          if (z[i] == ',')
          {
               z[i] = '.';
          }

          z[i] = v[i];
     }
     std::cout << std::endl;
     std::cout << "Result: " << calc(z) << std::endl;
     return 0;
}