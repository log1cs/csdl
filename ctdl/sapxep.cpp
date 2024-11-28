#include<iostream>
#include<vector>

using namespace std;

template <typename T>
void selectionSort(vector<T> & a) {
    for (int i = 0; i < a.size() - 1; i++) {
        int vt = i;
        std::cout << "i = " << i << std::endl;
        for (int j = i + 1; j < a.size(); j++)
            int jret = j;
            if (a[vt] > a[j])
                vt = j;
        if (vt != i) { 
            T tg = a[vt];
            a[vt] = a[i];
            a[i] = tg;
        }

        std::cout << "i = " << vt << ";" << "j = " << vt << std::endl;

        for(int i = 0;i < a.size(); i++)
        {
            cout << a[i] << " ";
        }        
    }
}

template <typename T>
void bubbleSort(vector<T> & a) {
    for (int i = 0; i < a.size()-1; i++) {
        int s = i;
        // Bước i
        for (int j = 0; j < a.size()-1-i; j++) {
            int jret = j;
            if (a[j] > a[j+1]) { 
                T tg = a[j]; 
                a[j] = a[j+1]; 
                a[j+1] = tg; 
            }
        }

        std::cout << "i = " << s << ";" << "j = " << jret << std::endl;

        for(int i = 0;i < a.size(); i++)
        {
            cout << a[i] << " ";
        }          
    }
}

template <typename T>
void insertionSort(vector<T> & a) {
    int j;
    for (int p = 1; p < a.size(); p++) {
        int pret = p;
        T tmp = a[p]; // Lay ra phan tu can chen
        for (j = p; j > 0; j--) { // j: vi tri don nhan
            if (tmp < a[j-1])
                a[j] = a[j-1]; // Dich ve phia sau
            else
                break;
        }
        a[j] = tmp; // Dat phan tu can chen 

        std::cout << "i = " << pret << ";" << "j = " << j << std::endl;

        for(int i = 0;i < a.size(); i++)
        {
            cout << a[i] << " ";
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

    std::cout << std::endl;

    bubbleSort(A);

    std::cout << std::endl;

    insertionSort(A);

    std::cout << std::endl;
    
    return 0;
}