#include<iostream>

using namespace std;

struct sinhvien
{
    // bind
    char hoten[50];
    string nganh;
    long int msv;
    double diemthi;
};

int main()
{
    sinhvien sinhvien;
    cout << "Nhap thong tin." << endl;
    cout << "Ho ten: ";
    cin.getline(sinhvien.hoten, 50); 
    cout << "Nganh: ";
    getline(cin, sinhvien.nganh); 
    cout << "Ma sinh vien: ";  
    cin >> sinhvien.msv;
    cout << "Diem thi: ";
    cin >> sinhvien.diemthi;

    cout << endl;

    cout << "Diem \t" << "Ho ten \t\t" << "MSV \t\t" << "Nganh" << endl;
    cout << sinhvien.diemthi << "\t" << sinhvien.hoten << "\t" << sinhvien.msv
    << "\t" << sinhvien.nganh;
    cout << endl;
    return 0;
}

