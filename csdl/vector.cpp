#include <iostream>
using namespace std;

template <typename T>

class Vector
{
public:
	// initCapacity la dung luong ban dau cua
	// vector, co gia tri ngam dinh bang 16.
	Vector(int initCapacity = 16)
	{
		size = 0;
		capacity = initCapacity;
		array = new T[capacity];
	}

	// Destructor
	~Vector()
	{
		delete[] array;
	}

	// Tra ve kich thuoc vector.
	int getSize()
	{
		return size;
	}

	// Tra ve true neu vector rong, nguoc lai tra ve false.
	bool isEmpty() {
		return (size == 0);
	}

	// index la chi so cua phan tu can truy nhap.
	T & operator[](int index)
	{
		return array[index];
	}

	// newElement la phan tu moi can chen vao cuoi vector.
	void pushBack(T newElement)
	{
		if (size == capacity) {
			expand (2 * capacity);
		}

		array[size] = newElement;

		// Update.
		size++;
	}

	// pos (position) la vi tri chen.
	// newElement la phan tu moi can chen.
	void insert(int pos, T newElement)
	{
		// Expands the storage 2 times if the current one is full.
		if (size == capacity) {
			expand (2 * capacity);
		}

		for (int i = size; i > pos; i--) {
			array[i] = array [i - 1];
		}

		array[pos] = newElement;

		// Update.
		size++;
	}

	// Xoa phan tu o cuoi vector.
	void popBack()
	{
		size--;
	}

	// pos (position) la vi tri cua phan tu can xoa.
	void erase(int pos)
	{
		for (int i = pos; i < size; i++) {
			array[i] = array[i + 1];
		}

		// Resize.
		size--;
	}

	// In cac phan tu ra man hinh.
	void print()
	{
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}

	private:
		int size;     // kich thuoc vector (so phan tu hien co)
		int capacity; // dung luong vector (suc chua)
		T * array;	  // con tro toi mang chua cac phan tu

	// Day la thao tac tro giup cho cac thao tac chen.
	// newCapacity la dung luong moi (phai lon hon kich thuoc).
	void expand(int newCapacity)
	{
		if (newCapacity <= size) {
			return;
		}

		T * old = array;
		array = new T[capacity];

		for (int i = 0; i < size; i++) {
			array[i] = old[i];
		}

		delete[] old;
		capacity = newCapacity;
	}
};

int main()
{
	Vector<int> v;

	v.pushBack(6);
	v.pushBack(2);
	v.pushBack(9);
	v.pushBack(1);
	v.pushBack(8);

	cout << "Cac phan tu: ";
	v.print(); // se in ra 6 2 9 1 8
	cout << "Kich thuoc: " << v.getSize() << endl; // se in ra 5

	v.insert(2, 7);
	cout << "Sau khi chen 7 vao vi tri 2: ";
	v.print(); // se in ra 6 2 7 9 1 8

	v.popBack();
	v.erase(1);
	cout << "Sau khi xoa 8 va 2: ";
	v.print(); // se in ra 6 7 9 1

	return 0;
}
