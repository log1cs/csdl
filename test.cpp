#include<iostream>
#include<vector>

using namespace std;

template <typename T>
void selectionSort(vector<T> & a) {
    for (int i = 0; i < a.size() - 1; i++) {
        int vt = i; // Vị trí của min
        for (int j = i + 1; j < a.size(); j++)
            if (a[vt] > a[j])
                vt = j; // Cập nhật vị trí của min
        if (vt != i) {  // Đổi chỗ min và phần tử đầu USL
            T tg = a[vt];
            a[vt] = a[i];
            a[i] = tg;
        }
    }
}

int main()
{
    vector<int> A;
    A.push_back(3);
    A.push_back(1);
    A.push_back(4);
    A.push_back(1);
    A.push_back(5);
    A.push_back(9);
    A.push_back(2);
    A.push_back(6);
    A.push_back(5);

    selectionSort(A);

    for(int i = 0;i < A.size(); i++)
    {
        cout << A[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}