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

        int getElem(int cnt) {
            Node* p = head;
            int i = 0;
            while (i < cnt) {
                if (i == cnt) {
                    return p->elem;
                }
                p = p->next;
                i++;
            }

            return -1;
        }

        // Remove the first element
        // Time complexity: 
        void popFront() {
            Node* old = head;
            head = head->next;
            delete old;
        }

        // Push the element to the first one in the list
        // Time complexity: O(1)
        void pushFront(T x) {
            Node* v = new Node(x, head);
            head = v;
        }

        // Remove an element
        // Time complexity: O(n)
        void remove(int x) {
            Node* p = head;
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
    int check;

    ds.pushFront(4);
	ds.pushFront(7);
	ds.pushFront(2);
	ds.pushFront(6);
	ds.pushFront(9);

    // 1. Tra ve kich thuoc cua danh sach
    cout << "Kich thuoc cua DSLK: " << ds.getSize() << endl;

    // 2. In cac phan tu trong danh sach len man hinh
    ds.print();

    // 3. Tra ve phan tu o vi tri k trong danh sach (vi tri bat dau tu 0)
    cout << "Nhap vi tri k trong danh sach can tim: ";
    cin >> check;
    if (check > ds.getSize()) {
        cout << "Khong ton tai vi tri nay." << endl;
    } else {
        cout << "Phan tu o vi tri k: " << ds.getElem(check) << endl;
    }

    // 4. Kiem tra xem mot gia tri x co mat trong danh sach hay khong
    cout << "Nhap phan tu can tim: ";
    cin >> check;
    if (ds.isExist(check)) {
        cout << "Tim thay phan tu " << check << " trong danh sach." << endl;
    } else {
        cout << "Khong tim thay phan tu " << check << " trong danh sach." << endl;
    }

    // 5. Chen mot phan tu moi vao truoc x (neu x ton tai trong danh sach)

    // 6. Xoa phan tu x (neu x ton tai trong danh sach)
    cout << "Nhap phan tu can tim: ";
    cin >> check;
    ds.remove(check);
    cout << "Da xoa phan tu " << check << "." << endl;
    ds.print();
    cout << "Kich thuoc cua DSLK: " << ds.getSize() << endl;

    // 7. Chen mot phan tu moi vao cuoi danh sach

    return 0;
}