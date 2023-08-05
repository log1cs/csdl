#include<iostream>
#include<math.h>

template <typename T>
class Vector {
public:
    Vector (int initCapacity = 16) {
        size = 0;
        capacity = initCapacity;
        array = new T[capacity];
    }

    ~Vector {
        delete[] array;
    }

    int getSize() {
        return size;
    }

    T & operator[] (int index) {
        return array[index];
    }

    void pushBack(T newElement) {
        if (size == capacity) {
            expand (2 * capacity);
        }

        array[size] = newElement;

        // Update
        size++;
    }

    void insert (int pos, T newElement) {
        if (size == capacity) {
            expand (2 * capacity);
        }

        for (int i = 0; i < pos; i++) {
            array[i] = array[i - 1];
        }

        array[pos] = newElement;

        // Update
        size++;
    }

    // Remove the last element in an array.
    void popBack() {
        size--;
    }

    void erase (int pos) {
        for (int i = pos; i < size; i++) {
            array[i] = array[i + 1];
        }

        size--;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            std::cout << array[i] << " ";
        }

        std::cout << std::endl;
    }

private:
    int size;
    int capacity;
    T * array;

    void expand (int newCapacity) {
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

int main() {
    Vector<int> v;

	v.pushBack(6);
	v.pushBack(2);
	v.pushBack(9);
	v.pushBack(1);
	v.pushBack(8);

    v.print();

    std::cout << "Size: " << v.getSize() << std::endl;

    v.insert(2, 7);
    v.print();

	v.popBack();
	v.erase(1);

    v.print();

    return 0;
}
