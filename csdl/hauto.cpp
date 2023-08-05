#include <iostream>
#include <cstring>
#include <cmath>

std::string Hau_to(std::string S);
int Uu_tien(char c);
double Tinh_toan(char A[]);
bool Kiem_tra_toan_tu(char A[]);
template <typename T>
class Stack
{
public:
     Stack()
     {
          top = NULL;
          size = 0;
     }
     ~Stack()
     {
          while (!Empty())
          {
               PopTop();
          }
     }
     bool Empty()
     {
          return (top == NULL);
     }
     void PopTop()
     {
          if (top->next == NULL)
          {
               top = NULL;
          }
          else
          {
               Node *old = top;
               top = old->next;
               delete old;
          }
          size--;
     }
     void PushTop(T e)
     {
          Node *v = new Node(e, NULL);
          if (Empty())
          {
               top = v;
          }
          else
          {
               v->next = top;
               top = v;
          }
          size++;
     }
     int Size()
     {
          return size;
     }
     T Top()
     {
          return top->elem;
     }
     void Print()
     {
          Node *v = top;
          while (v != NULL)
          {
               std::cout << v->elem << ' ';
               v = v->next;
          }
          std::cout << std::endl;
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
     Node *top;
     int size;
};
int main()
{
     char A[200];
     std::string S;
     std::cout << "Nhap bieu thuc (dang trung to): ";
     getline(std::cin, S);
     std::string X = Hau_to(S);
     std::cout << "Bieu thuc dang hau to: " << X << std::endl;
     for (int i = 0; i < X.length(); i++)
     {
          A[i] = X[i];
     }
     std::cout << "Ket qua tinh toan bieu thuc: " << Tinh_toan(A) << std::endl;
     return 0;
}
std::string Hau_to(std::string S) // Ham chuyen tu bieu thuc trung to sang hau to
{
     Stack<char> D;
     std::string X = "";
     int i = 0;
     while (i < S.length())
     {
          char c = S.at(i);
          if ('0' <= c && c <= '9' || c == '.')
               X += c;
          else if (c != ' ')
          {
               if (c == '(')
               {
                    D.PushTop('(');
               }
               else
               {
                    if (c == ')')
                    {
                         if (D.Top() == '(')
                              D.PopTop();
                         else
                         {
                              while (D.Top() != '(')
                              {
                                   X += ' ';
                                   X += D.Top();
                                   D.PopTop();
                              }
                              if (D.Top() == '(')
                                   D.PopTop();
                         }
                    }
                    else
                    {

                         while (!D.Empty() && Uu_tien(c) <= Uu_tien(D.Top()))
                         {
                              X += ' ';
                              X += D.Top();
                              D.PopTop();
                         }
                         D.PushTop(c);
                    }
               }
               X += ' ';
          }
          i++;
     }
     while (!D.Empty())
     {
          X += ' ';
          X += D.Top();
          D.PopTop();
     }
     return X;
}
int Uu_tien(char c) // Ham tra ve gia tri uu tien cua toan tu
{
     if (c == '(')
          return 0;
     else if (c == '+' || c == '-')
          return 1;
     else if (c == '*' || c == '/')
          return 2;
     else if (c == '^')
          return 3;
     else
          return -1;
}
double Tinh_toan(char A[]) // Ham tinh toan bieu thuc hau to
{
     Stack<double> DS;
     char *p = strtok(A, " ");
     while (p != NULL)
     {
          double c;
          if (Kiem_tra_toan_tu(p) == true)
          {
               double a = DS.Top();
               DS.PopTop();
               double b = DS.Top();
               DS.PopTop();
               if (strcmp(p, "+") == 0)
               {
                    c = b + a;
               }
               else if (strcmp(p, "-") == 0)
               {
                    c = b - a;
               }
               else if (strcmp(p, "*") == 0)
               {
                    c = b * a;
               }
               else if (strcmp(p, "/") == 0)
               {
                    c = b / a;
               }
               else if (strcmp(p, "^") == 0)
               {
                    c = pow(b, a);
               }
               DS.PushTop(c);
          }
          else
          {
               DS.PushTop(atof(p));
          }
          p = strtok(NULL, " ");
     }
     return DS.Top();
}
bool Kiem_tra_toan_tu(char p[]) // Ham kiem tra ky tu p co phai 1 toan tu hay khong
{
     return strcmp(p, "+") == 0 || strcmp(p, "-") == 0 || strcmp(p, "*") == 0 || strcmp(p, "/") == 0 || strcmp(p, "^") == 0;
}
