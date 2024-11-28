#include <iostream>
using namespace std;

template <typename T>
class Queue
{
public:
	Queue()
    {
        front = NULL;
        back = NULL;
    }
	
	~Queue()
    {
        while (!empty())
        {
            front = front->next;
        }
    }
		
	// Kiem tra hang doi co dang rong hay khong.
	bool empty()
    {
        return (front == NULL);
    }
		
	// Lay kich thuoc (so phan tu hien co) cua hang doi.
	int getSize()
    {
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
	void enqueue(T e)
    {
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
	T dequeue()
    {
        Node *old = front;
        int i = front->elem;
        front = front->next;
        delete old;

        return i;
    }
		
    // b)
    void print()
    {
        Node * p = front;
        while (p != NULL)
        {
            cout << p->elem << " ";
            p = p->next;
        }
        cout << endl;
    }

    // c)
    bool contains(T x)
    {
       Node *p = front;
        while (p != NULL)
        {
            if (x == p->elem)
            {
                std::cout << "1" << std::endl;
                return true;
            }
            p = p->next;
        }
        std::cout << "0" << std::endl;
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
	q.enqueue(3);
	q.enqueue(6);
	q.enqueue(1);
	q.enqueue(2);
	
	std::cout << "Size after inserting: " << q.getSize() << std::endl; // Se in ra 4
	
    q.contains(6);

	std::cout << "Queue: ";
    q.print();
    	
	std::cout << "Size after calling dequeue(): " << q.getSize() << std::endl; // Se in ra 0
		
	return 0;
}
