#include <iostream>
using namespace std;

template <typename T>
class CircleList {
public:
	CircleList()
	{
		cursor = NULL;
	}
	~CircleList()
	{
		while (!empty())
			popFront();
	}
	bool empty()
	{
		return (cursor == NULL);
	}
	void pushFront(T x)
	{
		if (cursor == NULL)
		{
			CNode *p = new CNode(x, NULL);
			p->next = p;
			cursor = p;
		}
		else
		{
			CNode *p = new CNode(x, cursor->next);
			cursor->next = p;
		}
	}
	void popFront()
	{
		CNode *old = cursor->next;
		cursor->next = cursor->next->next;
		delete old;
	}
	T front()
	{
		return cursor->next->elem;
	}
	T back()
	{
		return cursor->elem;
	}
	void nextCursor()
	{
		cursor = cursor->next;
	}
	int getSize()
	{
		CNode * p = cursor->next;
		int i = 1;
		while (p != cursor)
		{
			i = i + 1;
			p = p->next;
		}
		return i;
	}

	void print()
	{
		CNode *p = cursor;
		do
		{
			p = p->next;
			cout << p->elem << "  ";
		} while (p != cursor);
		cout << endl;
	}
private:
	struct CNode 
	{
		T  elem;
		CNode *next;
		CNode(T e, CNode *n)
		{
			elem = e;
			next = n;
		};
	}; // Kiểu của các nút.
	CNode * cursor;       // Con trỏ đặc biệt (trỏ
};                            // tới cuối danh sách).
int main()
{
	CircleList<int> ds;

	ds.pushFront(4);
	ds.pushFront(7);
	ds.pushFront(2);
	ds.pushFront(6);
	ds.pushFront(9);

	cout << "Danh sach phan tu: ";
	ds.print(); // in ra: 9 6 2 7 4
	cout << "Kich thuoc danh sach: " << ds.getSize(); // in ra: 5
	cout << endl;
	ds.popFront(); // xoa 9
	cout << "Danh sach sau khi xoa phan tu dau tien: ";
	ds.print(); // in ra: 6 2 7 4
}
