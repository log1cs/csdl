#include <iostream>
using namespace std;

template <typename T>
class SingleList
{
public:
	SingleList()
	{
		head = NULL;
	}

	~SingleList()
	{
		while (!empty()) {
			popFront();
		}
	}

	// Kiem tra xem danh sach co rong hay khong.
	bool empty()
	{
		return (head == NULL);
	}

	// Tra ve kich thuoc (so phan tu).
	int getSize()
	{
		Node * p = head;
		int n = 0;
		while (p != NULL) {
			n++;
			p = p->next;
		}
		return n;
	}

	// Tra ve phan tu dau danh sach.
	T front()
	{
		return head->elem;
	}

	// In cac phan tu tren cung mot dong, cach nhau boi dau cach.
	void print()
	{
		Node * p = head;
		while (p != NULL)
		{
			cout << p->elem << " ";
			p = p->next;
		}

		cout << endl;
	}

	// Chen x vao dau danh sach.
	void pushFront(T x)
	{
		Node * v = new Node (x, head);
		head = v;
	}

	// Xoa phan tu dau danh sach.
	void popFront()
	{
		Node * old = head;
		head = head->next;
		delete old;
	}


	// Xoa phan tu
	void remove (int x) {
		Node * p = head;
		if (p->elem == x) {
				head == p->next;
			delete p;
			return;
		}

		while ((p->next) != NULL) {
			if (x == (p->next)->elem) {
				Node * erase = p ->next;
				p->next = (p->next)->next;
				delete erase;
				return;
			}
			p = p->next;
		}
	return;
	}
	// Kiem tra xem danh sach co chua x hay khong.
	bool contains(T x)
	{
		Node *p = head;
		while (p != NULL)
		{
			if (x == p->elem)
			{
				return true;
			}
			p = p->next;
		}
		return false;
	}
private:
	struct Node {
    		T elem;      // Phần tử
    		Node * next; // Liên kết tới nút kế tiếp

    		Node(T e, Node * n) {
	  		elem = e;
          		next = n;
    		}
	};
	Node * head;
};

int main()
{
	SingleList<int> ds;

	ds.pushFront(4);
	ds.pushFront(7);
	ds.pushFront(2);
	ds.pushFront(6);
	ds.pushFront(9);

	cout << "Danh sach phan tu: ";
	ds.print(); // in ra: 9 6 2 7 4
	cout << "Kich thuoc danh sach: " << ds.getSize(); // in ra: 5
	cout << endl;

	if (ds.contains(7))
		cout << "Tim duoc 7 trong danh sach" << endl;
	if (!ds.contains(10))
		cout << "Khong tim duoc 10 trong danh sach" << endl;

	ds.popFront(); // xoa 9
	cout << "Danh sach sau khi xoa phan tu dau tien: ";
	ds.print(); // in ra: 6 2 7 4

	ds.remove(2);
	cout << "Danh sach sau khi xoa 2: ";
	ds.print();	// in ra: 6 7 4

	return 0;
}
