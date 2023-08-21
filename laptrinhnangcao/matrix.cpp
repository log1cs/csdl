#include<iostream>
// Phai co
#include<iomanip>
#include<cmath>

using namespace std;

bool cp(int n)
{
    int x = sqrt(n);
    return x * x == n ? true:false;
}

int main()
{
    int a[100][100], n;

    cout << "Nhap n = ";
    cin >> n;

    int j = 0, dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> a[i][j];

            if (cp(a[i][j]) == true)
            {
                dem++;
            }
        }
    }
        
    cout << "In ma tran: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << a[i][j];
        } 
        cout << endl;
    }
    
    cout << endl;
    cout << "Co " << dem << " so chinh phuong." << endl;
    return 0;
}