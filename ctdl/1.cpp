#include<iostream>

void swap(float &a, float &b) {
    float x = a;
    a = b;
    b = x;
}

void nhap() {
    float a, b, c, d;

    std::cout << "2 so nguyen: ";
    std::cin >> a >> b;

    std::cout << "2 so thuc: ";
    std::cin >> c >> d;

    swap(a, b);
    swap(c, d);

    std::cout << "Hoan vi 2 so nguyen: " << a << " " << b << std::endl;
    std::cout << "Hoan vi 2 so thuc: " << c << " " << d;

    std::cout << std::endl;
}

void org(float a[], int n) {
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

void print(float a[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void ins() {
    int n; 
    float a[1000];
    float b[1000];
    std::cout << "Nhap n = ";
    std::cin >> n;

    std::cout << "Nhap vao day so nguyen. " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << "A[" << i + 1 << "] = ";
        std::cin >> a[i];
    }

    std::cout << std::endl;
    std::cout << "Nhap vao day so thuc." << std::endl;

    for (int z = 0; z < n; z++)
    {
        std::cout << "B[" << z + 1 << "] = ";
        std::cin >> b[z];
    }

    std::cout << "Day so nguyen da nhap: " << std::endl;

    // In ra day so nguyen
    print(a, n);
    std::cout << "Day so nguyen sap xep tang dan la: " << std::endl;

    org(a, n);
    print(a, n);

    std::cout << std::endl;
    std::cout << "Day so thuc da nhap: " << std::endl;
    print(b, n);
    
    std::cout << "Day so thuc sap xep tang dan la: " << std::endl;
    org(b, n);
    print(b, n);

    std::cout << std::endl;
}

int main() {
    nhap();
    ins();

    std::cout << std::endl;
    std::cout << "Halt!";
    return 0;
}
