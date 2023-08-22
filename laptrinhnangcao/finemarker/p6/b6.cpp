#include<iostream>
#include<cmath>

class List
{
    public:
    List()
    {
        head = NULL;
    }

    void push(std::string msv, std::string ten, std::string namsinh)
    {
        Node *u = new Node(msv, ten, namsinh, NULL);
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

   void pushfront(std::string msv, std::string ten, std::string namsinh)
    {
        Node *u = new Node(msv, ten, namsinh, NULL);
        if (head == NULL) {  
            head = u;
            head->next = NULL;
        } else {
            u->next = head;
            head = u;
        }
    }

    void print()
    {
        Node *v = head;
        std::cout << "Hien thi danh sach:" << std::endl;
        while (v != NULL)
        {
            std::cout << v->msv << "\t";
            std::cout << v->ten << "\t";
            std::cout << v->namsinh << std::endl;
            v = v->next;
        }   
    }

    private:
    struct Node
    {
        std::string msv;
        std::string namsinh;
        std::string ten;
        Node *next;
        Node(std::string a, std::string b, std::string c, Node *d)
        {
            msv = a;
            ten = b;
            namsinh = c;
            next = d;
        }
    };
    Node *head;    
};

int main()
{
    List sv;
    std::string msv;
    std::string ten;
    std::string namsinh;

    do
    {
        std::cout << "Nhap MaSV: ";
        getline(std::cin, msv);
        
        if (msv.empty())
        {
            break;
        }
        
        std::cout << "Nhap ten: ";
        getline(std::cin >> std::ws, ten);

        std::cout << "Nam sinh: ";
        getline(std::cin >> std::ws, namsinh);

        sv.push(msv, ten, namsinh);
    } while (!msv.empty());

    sv.print();

    // Nhap them sinh vien.
    std::cout << "Cho SV can them vao dau DS:" << std::endl;
    
    std::cout << "MaSV: ";
    getline(std::cin, msv);
    
    std::cout << "Ten: ";
    getline(std::cin >> std::ws, ten);
    
    std::cout << "Nam sinh: ";
    getline(std::cin >> std::ws, namsinh);
    
    sv.pushfront(msv, ten, namsinh);

    sv.print();
    return 0;
}