#include<iostream>

using namespace std;

// Kieu du lieu: void

// bool() la ham kiem tra dung/sai (return true/false)
bool kt(int so)
{
    if (so % 2 == 0)
    {
        return true;
    } 

    return false;
}
// int() la ham tra ve so nguyen (return 0,1,2, ...)
// float(), double() la ham tra ve kieu so thuc (return 0.1, 0.2, ...)

// void() la ham khong tra ve du lieu
void sochan(int so)
{
    if (so % 2 == 0)
    {
        cout << so << " la so chan." << endl;
    }
}

int main()
{
    int a, b, c, d;

    cout << "Nhap a, b, c, d" << endl;
    cin >> a >> b >> c >> d;

    int dem;

    cout << "Dang kiem tra bang void sochan(int so)" << endl;
    sochan(a);
    sochan(b);
    sochan(c);
    sochan(d);

    cout << endl;

    cout << "Dang kiem tra bang bool kt(int so)" << endl;
    if (kt(a) == true)
    {
        cout << "a la so chan";
    } else {    
        cout << "a khong phai so chan";
    }
/*
    if (a % 2 == 0)
    {
        cout << "a la so chan" << endl;
    }
    
    if (b % 2 == 0)
    {
        cout << "b la so chan" << endl;
    }
    
    if (c % 2 == 0)
    {
        cout << "c la so chan" << endl;
    }
    
    if (d % 2 == 0)
    {
        cout << "d la so chan" << endl;
    }
*/

    return 0;
}
