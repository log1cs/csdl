#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<algorithm>

template<typename T>
class Stack
{
    public:
    Stack(int capacity = 100) {
        theArray = new T[capacity];
        // TopOfStack = 0 se gay ra warning*
        TopOfStack = 0;
    }

    ~Stack() {
        delete[] theArray;
    }

    int getSize() {
        return TopOfStack + 1;
    }

    bool empty() {
        return (TopOfStack == -1);
    }

    void push(T e) {
        TopOfStack++;
        theArray[TopOfStack] = e;
    }

    void pop() {
        TopOfStack--;
    }

    T top() {
        return theArray[TopOfStack];
    }

    void print() {
        for (int i = TopOfStack; i >= 0; i--) 
        {
            std::cout << theArray[i] << " ";
        }
        std::cout << std::endl;        
    }

    bool check(T x) {
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
     struct Node {
          T elem;
          Node *next;
          Node(T e, Node *n) {
               elem = e;
               next = n;
          }
     };

     T *theArray;
     int TopOfStack;    
};    

// Ham kiem tra so duoc nhap vao co phai
// la so thap phan hay khong.
// Time complexity: O(1)
int IsInt(double d)
{
     if (d == (int)d) {
          return 1;
     } else if (std::isinf(d) == true) {
          return 2;
     }
     return 3;
}

// Ham chuyen so nguyen/so thap phan thanh xau ky tu
// Time complexity: O(1)
std::string fconv(double a)
{
     if (IsInt(a) == 1) {
          std::cout << "Ket qua: " << a << std::endl;
     } else if (IsInt(a) == 2) {
          std::cout << "Bieu thuc khong xac dinh" << std::endl;
     } else {
          // Setup conversion
          std::ostringstream stream1;
          stream1 << std::fixed;
          stream1 << std::setprecision(1);
          stream1 << a;
          std::string string1 = stream1.str();
          
          int locale;
          std::cout << "Output la 1 so thap phan, chon 1 format: " << std::endl;
          do
          {
               std::cout << "1. en_US (dau cham)" << std::endl;
               std::cout << "2. fr_FR (dau phay)" << std::endl;
               std::cout << "3. In output o ca 2 format" << std::endl;
               std::cout << "Chon (1 - 3): ";
               std::cin >> locale;

               if (locale == 1)
               {
                    std::cout << "Da chon " << locale << std::endl;
                    std::replace(string1.begin(), string1.end(), ',', '.');
                    std::cout << "Ket qua: " << string1 << std::endl;
               } else if (locale == 2) {
                    std::cout << "Da chon " << locale << std::endl;
                    std::replace(string1.begin(), string1.end(), '.', ',');
                    std::cout << "Ket qua: " << string1 << std::endl;
               } else if (locale == 3) {
                    std::cout << "Da chon " << locale << std::endl;

                    // Setup conversion
                    std::ostringstream stream2;
                    stream2 << std::fixed;
                    stream2 << std::setprecision(1);
                    stream2 << a;
                    std::string string2 = stream2.str();

                    std::replace(string1.begin(), string1.end(), ',', '.');
                    std::cout << "Ket qua (dau cham): " << string1 <<  std::endl;
                    std::replace(string2.begin(), string2.end(), '.', ',');
                    std::cout << "Ket qua (dau phay): " << string2 << std::endl;
               } else {
                    std::cout << "Khong hop le. Hay nhap lai!" << std::endl;
               }
          } while (locale < 1 || locale > 3);
     }

     // Placebo de khu warning9
     return "1";
}

// Ham kiem tra ky tu trong mang bt[] co phai 1 toan tu hay khong.
// Time complexity: O(1)
bool check(char bt[]) 
{
     return strcmp(bt, "+") == 0 ||
            strcmp(bt, "-") == 0 || 
            strcmp(bt, "*") == 0 || 
            strcmp(bt, "/") == 0 || 
            strcmp(bt, "^") == 0;
}

// Kiem tra do uu tien cua toan tu.
// Time complexity: O(1)
int Priority(char pnx)
{
     if (pnx == '(') {
          return 0;
     } else if (pnx == '+' || pnx == '-') {
          return 1;
     } else if (pnx == '*' || pnx == '/' || pnx == 'x' ||
                pnx == '%' || pnx == '^') {
          return 2;
     // Trong truong hop khong thoa man dieu kien nao, tra ve -1.
     } else {
          return -1;
     }
}

// Chuyen bieu thuc tu trung to sang hau to.
// Space complexity: O(n)
std::string conv(std::string str, bool replace)
{
     Stack<char> sdm;

     if (replace == true) {
          std::replace(str.begin(), str.end(), ',', '.');
          std::replace(str.begin(), str.end(), 'x', '*');
     }

     // Khoi tao string q trong.
     std::string q = "";
     int i = 0;
     while (i < str.length())
     {
          char n = str.at(i);
          if ('0' <= n && n <= '9' || n == '.' || n == ',') {
               q += n;
          } else if (n != ' ') {
               // Khi tim thay '(', bo vao stack.
               if (n == '(') {
                    sdm.push('(');
               } else {
                    // Khi tim thay ')', loi het tat ca cac dau trong stack
                    // (tu dau stack den dau '(' cuoi cung duoc nhin thay).
                    if (n == ')') {
                         if (sdm.top() == '(') {
                              sdm.pop();
                         } else {
                              // Neu khong phai la '(', loi het cac dau con lai
                              // trong stack ra, theo 1 thu tu.
                              while (sdm.top() != '(') {
                                   q += ' ';
                                   q += sdm.top();
                                   sdm.pop();
                              // Pop not ( ra khoi stack (neu co)
                              } if (sdm.top() == '(') {
                                   sdm.pop();
                              }
                         }
                    } else {
                         // Ham so sanh do uu tien cua toan tu
                         while (!sdm.empty() && Priority(n) 
                                 < Priority(sdm.top())) 
                         {
                              //q += ' ';
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

     // Day cac thu con lai trong stack
     // vao q.
     while (!sdm.empty()) {
          q += ' ';
          q += sdm.top();
          sdm.pop();
     }
     return q;
}

// Ham tinh toan bieu thuc
// Time complexity: O(1)
double calc(char bt[])
{
     Stack<double> msm;
     char *c = strtok(bt, " ");
     while (c != NULL)
     {
          double q;
          if (check(c) == true)
          {
               double q1 = msm.top();
               msm.pop();
               double q2 = msm.top();
               msm.pop();

               if (strcmp(c, "+") == 0) {
                    q = q2 + q1;
               } else if (strcmp(c, "-") == 0) {
                    q = q2 - q1;
               } else if (strcmp(c, "*") == 0) {
                    q = q2 * q1;
               } else if (strcmp(c, "/") == 0) {
                    q = q2 / q1;
               } else if (strcmp(c, "^") == 0) {
                    q = pow(q2, q1);
               }

               msm.push(q);
          } else {
               msm.push(std::stod(c));
          }
          c = strtok(NULL, " ");
     }
     return msm.top();
}

int main()
{
     // Lam sach cua so terminal truoc khi chay.
     system("clear");
     std::string inp;

     /* Workaround cho so am */
     std::cout << "De tru so am hay add 0 - truoc gia tri am." << std::endl;
     std::cout << "Example 4 - (-3): 4 - (0 - 3)" << std::endl;

     std::cout << "Nhap bieu thuc trung to: ";
     getline(std::cin, inp);
     std::string v = conv(inp, true);

     // Do bi thua 1 phan tu trong string (doan cuoi string),
     // dieu chinh lai kich thuoc xau truoc khi bo vao p.
     std::string p = conv(inp, false);
     p.resize(p.size() - 1);

     std::cout << std::endl;
     std::cout << "Bieu thuc hau to: " << p << std::endl;

     char z[inp.size()];

     // Chuyen ki tu tu mang v (mang da duoc chuyen doi,
     // da duoc chinh sua cac loi ki tu) va pass vao vong
     // lap for.
     for (int i = 0; i < v.length(); i++)
     {
          if (z[i] == ',')
          {
               z[i] = '.';
          }

          z[i] = v[i];
     }
     std::cout << std::endl;

     // Goi ham fconv de xu ly bieu thuc.
     fconv(calc(z));
     return 0;
}
