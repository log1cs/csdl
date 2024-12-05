#include <iostream>

using namespace std;

template <typename T>
class SingleList {
    public:
        // Setup the list
        // Time complexity: O(1)
        SingleList() {
            head = NULL;
        }

        // Destructor
        // Time complexity: O(n)
        ~SingleList() {
            while(!isEmpty())
                popFront();
        }

        // Check if the list is empty.
        bool isEmpty() {
            return (head == NULL);
        }

        // Get the size of the list.
        // Time complexity: O(n)
        int getSize() {
            Node* p = head;
            int n = 0;

            while (p != NULL) {
                n++;
                p = p->next;
            }

            return n;
        }

        // Return the first element.
        T front() {
            return head->elem;
        }

        // Print
        // Time complexity: O(n)
        void print() {
            Node* p = head;
            cout << "Cac phan tu trong mang:";
            while (p != NULL) {
                cout << " " << p->elem;
                p = p->next;
            }

            cout << endl;
        }

		// Get element
        int getElem(T cnt) {
            Node *curr = head;
			Node *prev = NULL;	
			int i = 0;
			
			while (curr != NULL) {
				prev = curr;
				curr = curr->next;
				if (i == cnt) {
					return prev->elem;
				}
				i++;
			}
			
			return -1;
        }

        // Remove the first element
        // Time complexity: 
        void popFront() {
            Node *old = head;
            head = head->next;
            delete old;
        }

        // Push the element to the first one in the list
        // Time complexity: O(1)
        void pushFront(T x) {
            Node *v = new Node(x, head);
            head = v;
        }
        
        // Push the element to the last one in the list
        void pushLast(T x) {
			Node* temp = new Node(x, NULL);
			
			if (head == NULL) {
				head = temp; 
			}
			
			Node* last = head;
			
			while (last->next != NULL) {
				last = last->next;
			}
				        	
			last->next = temp;
		}
		
		// TODO: Broken when inserting in the first element
		void pushBeforeGivenElement(T x, T given) {
			Node *v = new Node(x, NULL);
			
			if (head == NULL) {
				return;
			}
			
			if (head->elem == given) {
				Node *tmp = new Node(x, NULL);
				tmp->next = head;
				head = tmp;
			}
			
			Node *current = head;
			Node *prev = NULL;
			
			while (current != NULL && current->elem != given) {
				prev = current;
				current = current->next;
			}
			
			if(current != NULL) {
				Node *tmp = new Node(x, NULL);
				prev->next = tmp;
				tmp->next = current;
			}
		}

        // Remove an element
        // Time complexity: O(n)
        void remove(int x) {
            Node *p = head;
            if (p->elem == x) {
                head = p->next;
                delete p;
                return;
            }

            while ((p->next) != NULL) {
                if (x == (p->next)->elem) {
                    Node* erase = p ->next;
                    p->next = (p->next)->next;
                    delete erase;
                    return;
                }
                p = p->next;
            }

            return;
        }
        
        // Check if an element is present
        // Time complexity: O(n)
        bool isExist(T x) {
            Node* p = head;
            while (p != NULL) {
                if (x == p->elem) {
                    return true;
                }

                p = p->next;
            }

            return false;
        }

    private:
        struct Node {
            T elem;             // Element
            Node* next;         // Point to the next element

            Node(T e, Node* n) {
                elem = e;
                next = n;
            }
        };

        Node* head;
};

int main() {
    SingleList<int> ds;
    int check, pos;

    ds.pushFront(4); // 4
	ds.pushFront(7); // 4 7
	ds.pushFront(2); // 4 7 2
	ds.pushFront(6); // 4 7 2 6
	ds.pushFront(9); // 4 7 2 6 9

    // 1. Tra ve kich thuoc cua danh sach
    cout << "Kich thuoc cua DSLK: " << ds.getSize() << endl;

    // 2. In cac phan tu trong danh sach len man hinh
    ds.print();
    cout << endl;

    // 3. Tra ve phan tu o vi tri k trong danh sach (vi tri bat dau tu 0)
    cout << "Nhap vi tri k trong danh sach can tim: ";
    cin >> check;
    if (check > ds.getSize()) {
        cout << "Khong ton tai vi tri nay." << endl;
    } else {
        cout << "Phan tu o vi tri k: " << ds.getElem(check) << endl;
    }
	cout << endl;

    // 4. Kiem tra xem mot gia tri x co mat trong danh sach hay khong
    cout << "Nhap phan tu can tim: ";
    cin >> check;
    if (ds.isExist(check)) {
        cout << "Tim thay phan tu " << check << " trong danh sach." << endl;
    } else {
        cout << "Khong tim thay phan tu " << check << " trong danh sach." << endl;
    }
    cout << endl;

    // 5. Chen mot phan tu moi vao truoc x (neu x ton tai trong danh sach)
	cout << "Chen 1 phan tu moi vao truoc x, nhap phan tu x: ";
	cin >> pos;
	cout << "Nhap phan tu can chen: ";
	cin >> check;
	ds.pushBeforeGivenElement(check, pos);
	ds.print();
	cout << "Kich thuoc cua DSLK: " << ds.getSize() << endl;
	cout << endl;

    // 6. Xoa phan tu x (neu x ton tai trong danh sach)
    cout << "Nhap phan tu can tim: ";
    cin >> check;
    ds.remove(check);
    cout << "Da xoa phan tu " << check << "." << endl;
    ds.print();
    cout << "Kich thuoc cua DSLK: " << ds.getSize() << endl;
	cout << endl;

    // 7. Chen mot phan tu moi vao cuoi danh sach
	cout << "Nhap phan tu de chen vao cuoi danh sach: ";
	cin >> check;
	ds.pushLast(check);
	ds.print();
    cout << "Kich thuoc cua DSLK: " << ds.getSize() << endl;

    return 0;
}
