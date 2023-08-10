#include <iostream>
#include <string>

using namespace std;

// Muc tu trong tu dien
struct MucTu
{
    string tuTiengAnh;
    string nghiaTiengViet;

    // Ham tao
    MucTu(string tuTA = "", string nghiaTV = "") 
    {
        tuTiengAnh = tuTA;
        nghiaTiengViet = nghiaTV;
    }
};

// Tu dien dua tren bang bam tham do tuyen tinh
class TuDien
{
public:
    // Ham tao
    TuDien(int size = 101) // Kich thuoc bang bam ngam dinh la 101(0..100)
    {
        table = new MucTu[size];
        trong = new bool[size];
        tableSize = size;

        for (int i = 0; i < size; i++) 
        {
            trong[i] = true;
        }
    }

    // Ham huy
    ~TuDien()
    {
        delete[] table;
        delete[] trong;
    }
   
    // Chen muc tu vao tu dien
    void chenMucTu(MucTu mt) 
    {
        int i = hash(mt.tuTiengAnh);

        while (!trong[i])
        {
            i++;
            i = i % tableSize;
        }

        table[i] = mt;
        trong[i] = false;
    }
    
    // Lay nghia tieng Viet
    string nghiaTiengViet(string tuTiengAnh) 
    {
        int i = hash(tuTiengAnh);

        while (!trong[i])
        {
            if (tuTiengAnh == table[i].tuTiengAnh)
            {
                return table[i].nghiaTiengViet;
            } 
            
            i++;
            i = i % tableSize;
        }

        return "";
    }
	
    void update(string tuTiengAnh, string nghiaTiengVietnew)
    {
        int i = hash(tuTiengAnh);
        
        while(!trong[i])
        {
            if (tuTiengAnh == table[i].tuTiengAnh)
            {
                table[i].nghiaTiengViet = nghiaTiengVietnew;
                return;
            }

            i++; 
            i = i % tableSize; 
        }
        return;
    }

    void spm(MucTu mt)
    {
        int i = hash(mt.tuTiengAnh);

        while (!trong[i])
        {
            if (table[i].tuTiengAnh == mt.tuTiengAnh &&
                table[i].nghiaTiengViet == mt.nghiaTiengViet)
            {
                trong[i] == true;
                return;
            }

            i++;
            i = i % tableSize;
        }
        return;
    }


private:
    MucTu *table; // Con tro toi bang bam
    int tableSize; // Kich thuoc bang bam      
    bool *trong;  // Neu trong[i] == true thi vi tri i
                   // trong bang bam dang trong.
	
    // Ham bam anh xa tu tieng Anh sang mot vi tri trong bang bam:
    //   1. Cong cac ky tu
    //   2. Chia cho kich thuoc bang bam va lay phan du
    int hash(string tuTiengAnh) 
    {
        int value = 0;
        for (int i = 0; i < tuTiengAnh.size(); i++)
        {
            value += tuTiengAnh[i];
        }

        return value % tableSize;
    }
};

int main()
{
    TuDien td;
	
    // Tao mot vai muc tu
    MucTu mt1("computer", "may tinh");
    MucTu mt2("memory", "bo nho");
    MucTu mt3("hard disk", "dia cung");
    MucTu mt4("Duc Anh", "Ngu");
	
    // Chen cac muc tu vao tu dien
    td.chenMucTu(mt1);
    td.chenMucTu(mt2);
    td.chenMucTu(mt3);
    td.chenMucTu(mt4);

    string tuTA, nghiaTV;

    td.update("memory", "bo nho dem");
    td.spm(mt3);

    // Yeu cau nhap tu tieng Anh de tra cuu tu dien
    cout << "Nhap tu tieng Anh: ";
    getline(cin, tuTA);
	
    // Tim nghia tieng Viet
    nghiaTV = td.nghiaTiengViet(tuTA);
	
    // In ket qua tra cuu
    if (nghiaTV == "")
        cout << "Tu vua nhap khong co trong tu dien" << endl;
    else
        cout << "Nghia cua tu vua nhap la: " << nghiaTV << endl;
    return 0;
}
