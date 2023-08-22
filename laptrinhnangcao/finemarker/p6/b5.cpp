#include<iostream>
#include<cmath>

class List
{
    public:
    List()
    {
        head = NULL;
    }

    void push(std::string ten, double diem)
    {
        Node *u = new Node(ten, diem, NULL);
        if (head == NULL) {
            head = u;
            head->next = NULL;
        } else {
            Node *v = head;
            while (v->next != NULL)
            {
                v = v->next;
            }
            v->next = u;
            u->next = NULL;
        }
    }
    void print()
    {
        Node *v = head;
        std::cout << "In lai danh sach:" << std::endl;
        while (v != NULL)
        {
            std::cout << v->ten << "\t" << v->diem << std::endl;
            v = v->next;
        }
    }

    private:
    struct Node
    {
        std::string ten;
        double diem;
        Node *next;

        Node(std::string a, double b, Node *c)
        {
            ten = a;
            diem = b;
            next = c;
        } 
    };
    Node *head;
};

int main()
{
    List list;
    std::string ten;
    double diem;
    int n;

    do
    {
        std::cout << "Cho N = ";
        std::cin >> n;
    } while (n < 1 || n > 99);
    
    for (int i = 0; i < n; i++)
    {
        std::cout << "Ho va ten: ";
        getline(std::cin >> std::ws, ten);

        do 
        {
            std::cout << "Diem: ";
            std::cin >> diem;

            if (diem < 0 || diem > 10)
            {
                std::cout << "Nhap lai diem thi!" << std::endl;
            }
        } while (diem < 0 || diem > 10);
        list.push(ten, diem);
    }

    std::cout << "Thong tin sinh vien them vao DS:" << std::endl;
    std::cout << "Ho va Ten: ";
    getline(std::cin >> std::ws, ten);
    do
    {
        std::cout << "Diem thi: ";
        std::cin >> diem;

        if (diem < 0 || diem > 10)
        {
            std::cout << "Nhap lai diem thi!" << std::endl;
        }
    } while (diem < 0 || diem > 10);
    list.push(ten, diem);
    list.print();
    return 0;
}