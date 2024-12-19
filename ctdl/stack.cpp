#include<iostream>

using namespace std;

template<typename T>
class Stack
{
    public:
        Stack (int Capacity = 100) {
            theArray = new T[Capacity];
            TopOfStack = -1;
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

        // In cac phan tu cua ngan xep len man hinh.
        void print() {
            for (int i = TopOfStack; i >= 0; i--) {
                cout << theArray[i] << " ";
            }
            cout << endl;        
        }

        bool check(T x) {
            for (int i = TopOfStack; i >= 0; i--) {
                if (x == theArray[i]) {
                    return true;
                }
            }
            return false;
        }

    private:
        T *theArray;
        int TopOfStack;
};

int main()
{	
    int cnt = 0;
	Stack<char> s;
	
    // Kiem tra ngan xep co dang rong hay khong.
	if (s.empty()) {
		cout << "Ngan xep dang rong." << endl;
    } else {
        cout << "Ngan xep dang khong rong." << endl;
    }

    // Chen 1 so phan tu vao stack.
	s.push('B'); 
	s.push('E');
	s.push('K');
	s.push('A');
	s.push('C');

    // In tat ca cac phan tu trong ngan xep len man hinh
	cout << "Cac phan tu trong ngan xep: ";
    s.print();    

    // Kiem tra x co ton tai trong ngan xep hay khong
    char x;
    cout << "Nhap x: ";
    cin >> x;

    if (s.check(x)) {
        cout << x << " ton tai trong ngan xep!" << endl;
    } else {
        cout << x << " khong ton tai trong ngan xep!" << endl;
    }

    // Rut tung phan tu ra khoi ngan xep cho den khi ngan xep rong
    // va kiem tra xem ngan xep da rong hay chua.
	cout << "Tong so phan tu trong stack hien tai: " << s.getSize() << endl;

    while (!s.empty()) {
        cout << "Ngan xep chua rong. Dang loai bo phan tu " << cnt + 1 << "." << endl;
        s.pop();
        cnt++;   
    }
    cout << "Ngan xep da rong." << endl;



    return 0;
}
