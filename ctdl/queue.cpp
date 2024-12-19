#include <iostream>
using namespace std;

template <typename T>
class Queue
{
public:
	Queue() {
        front = NULL;
        back = NULL;
    }
	
	~Queue() {
        while (!empty())
        {
            front = front->next;
        }
    }
		
	// Kiem tra hang doi co dang rong hay khong.
	bool empty() {
        return (front == NULL);
    }
		
	// Lay kich thuoc (so phan tu hien co) cua hang doi.
	int getSize() {
        Node *p = front;
        int i = 0;
        while (p != NULL)
        {
            p = p->next;
            i++;
        }
        return i;
    }
		
	// Them phan tu e vao cuoi hang doi.
	void enqueue(T e) {
        Node * p = new Node (e, NULL);
        if (empty())
        {
            front = p;
        } else {
            back->next = p;
        }
        back = p;
    }
		
	// Xoa phan tu o dau hang doi.
	T dequeue() {
        Node *old = front;
        int i = front->elem;
        front = front->next;
        delete old;

        return i;
    }
		
    // In cac phan tu ra man hinh
    void print() {
        Node * p = front;
        while (p != NULL)
        {
            cout << p->elem << " ";
            p = p->next;
        }
        cout << endl;
    }

    // Kiem tra cac phan tu co trong hang doi hay khong.
    bool contains(T x) {
       Node *p = front;
        while (p != NULL) {
            if (x == p->elem) {
                return true;
            }
            p = p->next;
        }
        return false;
    }

private:
    T *theArray;

	struct Node
	{
		T elem;
		Node * next;

        Node(T e, Node * n)
        {
            elem = e;
            next = n;
        }
	};
	
	Node * front; // Con tro toi nut dau danh sach
	Node * back;  // Con tro toi nut cuoi danh sach
	int size;     // Kich thuoc cua hang doi
};

int main()
{
	Queue<int> q;
    int check, cnt = 0;

    // Kiem tra hang doi co dang rong hay khong
	if (q.empty()) {
		cout << "Hang doi dang rong." << endl;
    } else {
        cout << "Hang doi dang khong rong." << endl;
    }

    // Chen vao hang doi mot so phan tu
	q.enqueue(3);
	q.enqueue(6);
	q.enqueue(1);
	q.enqueue(2);
    q.enqueue(5);
    q.enqueue(9);

    // In tat ca cac phan tu trong hang doi len man hinh
	std::cout << "Hang doi: ";
    q.print();

    // Nhap vao x roi kiem tra x co trong hang doi hay khong
    cout << "Kiem tra phan tu co ton tai trong hang doi. Nhap x: ";
    cin >> check;

    if (q.contains(check)) {
        cout << "Phan tu " << check << " co ton tai trong hang doi." << endl; 
    } else {
        cout << "Phan tu " << check << " khong ton tai trong hang doi." << endl; 
    }
    
    // Rut tung phan tu ra khoi hang doi cho den khi hang doi rong
    // va kiem tra xem hang doi da rong hay chua
    cout << "So luong phan tu truoc khi dequeue() lan luot la: " << q.getSize() << endl;
    while (!q.empty()) {
        cout << "Dang dequeue() phan tu thu " << cnt + 1 << "." << endl;
        q.dequeue();
        cnt++;
    }
    cout << "Hang doi dang rong." << endl;
	
    return 0;
}
