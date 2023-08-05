#include <iostream>
using namespace std;
template <typename T>
class DoubleList {
    public:
        DoubleList(){
        	header = NULL;
        	trailer = NULL;
        	currentPos=NULL;
		}
		~DoubleList(){
			while(!empty()){
				popFront();
			}
		}
		bool empty(){
			return (header == NULL&&trailer == NULL);
		}
		void pushFront(T e){
			DNode *u = new DNode;
			u->elem = e;	u->prev = NULL;u->next = NULL;
			if(empty())
				trailer = u;
			else
				header->prev = u;
			u->next = header;
			header = u;
			currentPos = u;
		}
		void popFront(){
			DNode *old = header;  //giu lai dia chi header
		   	if(header->next == NULL) {//neu chi co 1 phan tu
		      		trailer = NULL; //ds rong
		      		header = NULL;
		   	}else
		   	   	header->next->prev = NULL;
		     	header = header->next;
		     	 delete old;	//giai phong bo nho
		}
		void print(){
			DNode *p=header;
			while (p!=NULL){
				cout<<p->elem<<" ";
				p=p->next;
			}
			cout<<endl;
		}
    private:
        struct DNode { 
			T elem;
			DNode *next;
			DNode *prev;
		}; // Kiểu của các nút
        DNode * header;       // Đầu danh sách (nút giả)
        DNode * trailer;      // Cuối danh sách (nút giả)
        DNode * currentPos;   // Vị trí hiện hành
};
int main(){
	DoubleList <int> v;
	v.pushFront(5);
	v.pushFront(5);
	v.pushFront(9);
	v.pushFront(1);
	v.pushFront(23);
	v.pushFront(7);
	cout<<"Day cac phan tu sau khi chen: ";
	v.print();
	v.popFront();
	cout<<"Day sau khi loai phan tu dau tien: ";
	v.print();
	return 0;
}
