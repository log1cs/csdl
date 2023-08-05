#include <iostream>
template <typename T>
class DoubleList
{
public:
     DoubleList() // Ham tao
     {
          header = NULL;
          trailer = NULL;
          size = 0;
     }
     ~DoubleList() // Ham huy
     {
          while (empty())
          {
               popFront();
          }
     }
     bool empty() // Kiem tra danh sach rong
     {
          return (header == NULL && trailer == NULL);
     }
     void popFront() // Xoa phan tu dau danh sach
     {
          DNode *old = header;
          header = header->next;
          header->prev = NULL;
          delete old;
          size--;
     }
     void pushFront(T e) // Chen phan tu vao dau danh sach
     {
          DNode *v = new DNode(e, header, NULL);
          if (empty())
          {
               header = v;
               trailer = v;
          }
          else
          {
               header->prev = v;
               v->next = header;
               header = v;
          }
          size++;
          currentPos = v;
     }
     void popBack() // Xoa phan tu cuoi danh sach
     {
          DNode *old = trailer;
          trailer = trailer->prev;
          trailer->next = NULL;
          delete old;
          size--;
     }
     void pushBack(T e) // Chen phan tu vao cuoi danh sach
     {
          DNode *u = new DNode(e, NULL, trailer);
          if (empty())
          {
               trailer = u;
               header = u;
          }
          else
          {
               trailer->next = u;
               u->prev = trailer;
               trailer = u;
          }
          currentPos = u;
          size++;
     }
     void print()
     {
          DNode *i = header;
          while (i != NULL)
          {
               std::cout << i->elem << " ";
               i = i->next;
          }
          std::cout << std::endl;
     }

private:
     struct DNode
     {
          T elem;
          DNode *next;
          DNode *prev;
          DNode(T e, DNode *n, DNode *p)
          {
               elem = e;
               next = n;
               prev = p;
          }
     };
     DNode *header;
     DNode *trailer;
     DNode *currentPos;
     int size;
};
int main(){
	DoubleList <int> v;
	v.pushFront(5);
	v.pushFront(5);
	v.pushFront(9);
	v.pushFront(1);
	v.pushFront(23);
	v.pushFront(7);
	std::cout<<"Day cac phan tu sau khi chen: ";
	v.print();
	v.popFront();
	std::cout<<"Day sau khi loai phan tu dau tien: ";
	v.print();
	return 0;
}
