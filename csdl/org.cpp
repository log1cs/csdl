#include<iostream>
#include<bits/stdc++.h>

void selsort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] < A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    std::cout << "Selection sort." << std::endl;
    std::cout << "Sorted array: ";
    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << A[i] << " ";
    }
}

void inssort(int a[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i;
        while (j > 0 && a[j - 1] > key)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = key;
    }

    std::cout << "Insertion sort." << std::endl;
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }    
}

void bubsort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                std::swap(A[j], A[j + 1]);
            }
        }
    }

    std::cout << "Bubble sort." << std::endl;
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << A[i] << " ";
    }    
}

void par(int A[], int left, int right)
{
    if (left < right)
    {
        int pivot = A[(left + right) / 2];
        int i = left, j = right;

        while (i < j)
        {
            while (A[i] < pivot)
            {
                i++;
            }

            while (A[j] > pivot)
            {
                j--;
            }

            if (i <= j)
            {
                if (i < j)
                {
                    std::swap(A[i], A[j]);
                }
                i++;
                j--;
            }
        }
        par(A, left, j);
        par(A, i, right);
    }    
}

void heapify(int arr[], int n, int i) {
  // Find largest among root, left child and right child
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
    largest = left;

  if (right < n && arr[right] > arr[largest])
    largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      std::swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
  }
}

void heapsort(int a[], int n)
{
    heapify(a, 0, n - 1);

    std::cout << "Heap sort" << std::endl;
    std::cout << "Running in function heapify()." << std::endl;
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }

}

void quicksort(int a[], int n)
{
    par(a, 0, n - 1);

    std::cout << "Quick sort" << std::endl;
    std::cout << "Running in function par()." << std::endl;
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
}

// Merge two subarrays L and M into arr
void mergeify(int arr[], int p, int q, int r) {

    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

// Divide the array into two subarrays, sort them and merge them
void subarrays(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    subarrays(arr, l, m);
    subarrays(arr, m + 1, r);

    // Merge the sorted subarrays
    mergeify(arr, l, m, r);
  }
}

void mergesort(int a[], int n) 
{

    subarrays(a, 0, n - 1);
    std::cout << "Merge sort" << std::endl;
    std::cout << "Running in function mergeify() and subarrays()." << std::endl;
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }    
}

int menu(int a[], int c) 
{  
    // Define.
    int inp;

    std::cout << "Make a choice (1-6): "<< std::endl;
    std::cout << "1. Selection sort" << std::endl;
    std::cout << "2. Insertion sort" << std::endl;
    std::cout << "3. Bubble sort" << std::endl;
    std::cout << "4. Heap sort" << std::endl;
    std::cout << "5. Quick sort" << std::endl;
    std::cout << "6. Merge sort" << std::endl;
    std::cout << "7. All" << std::endl;
    std::cout << "Your choice: ";
    std::cin >> inp;

    
    if (inp == 1) {
        selsort(a, c);
    } else if (inp == 2) {
        inssort(a, c);
    } else if (inp == 3) {
        bubsort(a, c);
    } else if (inp == 4) {
        heapsort(a, c);
    } else if (inp == 5) {
        quicksort(a, c);
    } else if (inp == 6) {
        mergesort(a, c);
    } else if (inp == 7) {
        selsort(a, c);
        std::cout << std::endl;
        inssort(a, c);
        std::cout << std::endl;
        bubsort(a, c);
        std::cout << std::endl;
        heapsort(a, c);
        std::cout << std::endl;
        quicksort(a, c);
        std::cout << std::endl;
        mergesort(a, c);

        std::cout << std::endl;
        std::cout << "End. Halting!" << std::endl;
    } else {
        std::cout << "Invalid response" << std::endl;
        return 0;
    }
    return 1;
}

void print(int a[], int n)
{
    std::cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void inp()
{
    int n;
    std::cout << "n = ";
    std::cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        std::cout << "A[" << i << "] = ";
        std::cin >> a[i];
    }

    print(a, n);
    menu(a, n);

    std::cout << std::endl;
}

int main()
{
    inp();
    return 0;
}
