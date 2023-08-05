#include<iostream>

int TienDien(int n)
{
    int b1 = 2000, b2 = 3000, b3 = 4000, b4 = 5000, res;

    if (n < 250)
    {
        res = n * b1;
    } else if (n >= 250 && n < 400) {
        res = (250 * b1) + ((n - 250) * b2);
    } else if (n >= 400 && n < 500) {
        res = (250 * b1) + (400 * b2) + ((n - 400) * b3);
    } else if (n >= 500) {
        res = (250 * b1) + (400 * b2) + (500 * b3) + ((n - 500) * b4);
    }   
    return res;
}

int main()
{
    int a[20], n;

    do {
        std::cout << "n <= 20." << std::endl;
        std::cout << "Enter n = " << std::endl;
        std::cin >> n;
    } while (n <= 0 || n > 20);

    for (int i = 0; i < n; i++)
    {
        std::cout << "Ho gia dinh thu " << i + 1 << ": ";
        std::cin >> a[i];
    }

    int min = a[0], so;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Tien dien phai tra cho ho " << i + 1 << " la : " << TienDien(a[i]) << std::endl;
        if (min > TienDien(n)) {
            so = i + 1;
            min = TienDien(a[i]);
        }
    }

    std::cout << "So ho tieu thu it nhat la ho " << so << " voi muc tieu thu: " << min << std::endl; 

    return 0;
}