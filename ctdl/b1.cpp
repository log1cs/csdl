#include <iostream>
#include <string>

using namespace std;

// Kieu cua cac nut tren cay (chua thong tin ve mot sinh vien).
struct Node
{
	int sbd;      // So bao danh
	string hoTen; // Ho ten sinh vien
	Node * left;  // Con tro toi nut con trai
	Node * right; // Con tro toi nut con phai
    // b2
    int height;

	// Ham tao.
	Node(int s, string h, int hl, Node * l, Node * r) 
    {
        sbd = s;
        hoTen = h;
        left = l;
        right = r;

        // b2
        height = hl;
    }
};

// Lop cay nhi phan tim kiem.
class BSTree
{
public:
	// Ham tao (ban dau cay rong).
	BSTree() 
    {
        root = NULL;
    }

	// Ham huy (xoa het cac nut tren cay).
	~BSTree() 
    {
        makeEmpty();
    }
		
	// Kiem tra cay co rong hay khong.
	bool isEmpty() 
    {
        return (root == NULL);
    }

	// Xoa het cac nut tren cay.
	void makeEmpty() 
    {
        makeEmpty(root);
    }
		
	// Chen mot sinh vien moi vao cay.
	void insert(int sbd, string hoTen) 
    {
        insert(sbd, hoTen, root);
    }
		
	// Tim sinh vien theo so bao danh.
	Node * search(int sbd) 
    {
        return search(sbd, root);
    }

	// Cac ham duyet cay viet them o day...
    void print()
    {
        print(root);
    }

    void balance()
    {
        balance(root);
    }

private:
	Node * root; // Con tro toi nut goc cua cay

    /* Bai 2 */
    void balance(Node * & t)
    {
        if (t == NULL)
        {
            return;
        }

        if (((t->left)->height) - ((t->right)->height) > 1) {
            if (t->left->left->height >= t->left->right->height) {
                rotateLeft2(t);
            } else {
                doublerotateLeft2(t);
            }
        } else if (((t->right)->height) - ((t->left)->height > 1) {
            if (t->right->right->height >= t->right->left->height) {
                rotateRight2(t);
            } else {
                doublerotateRight2(t);
            }
        }
    }
	
    void rotateLeft2(Node *  & k2)
    {
        Node * k1 = k2->left;
        k2->left = k1->right;
        k1->right = k2;
        k2->height = k2->left->height > k2->right->height ? k2->left->height + 1 : k2->right->height + 1;
        k1->height = k1->left->height > k1->right->height ? k1->left->height + 1 : k1->right->height + 1;
        k2 = k1;
    }

    void rotateRight2(Node *  & k1)
    {
        Node * k2 = k1->right;
        k1->right = k2->left;
        k2->left = k1;
        k2->height = k2->left->height > k2->right->height ? k2->left->height + 1 : k2->right->height + 1;
        k1->height = k1->left->height > k1->right->height ? k1->left->height + 1 : k1->right->height + 1;
        k1 = k2;
    }

    void doublerotateLeft2(Node * & k3)
    {
        rotateRight2(k3->left);
        rotateLeft2(k3);
    }

    void doublerotateRight2(Node * & k1)
    {
        rotateLeft2(k1->right);
        rotateRight2(k1);
    }

	// Xoa rong cay (viet theo kieu de quy).
	void makeEmpty(Node * & t) 
    {
        if (t == NULL) {
            return;
        }

        makeEmpty(t->left);
        makeEmpty(t->right);

        delete t;
        t = NULL;
    }
	
	// Chen mot sinh vien moi vao cay (viet theo kieu de quy).
	void insert(int sbd, string hoTen, Node * & t) 
    {
        if (t == NULL) {
            t = new Node (sbd, hoTen, NULL, NULL, NULL);
        } else if (sbd < t->sbd) {
            t->left->height += 1;
            insert(sbd, hoTen, t->left);
        } else if (sbd > t->sbd) {
            t->right->height += 1;
            insert(sbd, hoTen, t->right);
        }

        balance(t);
    }
		
    // Tim sinh vien theo so bao danh (viet theo kieu de quy).
	Node * search(int sbd, Node * t) 
    {
        if (t == NULL) {
            return NULL;
        } 

        if (sbd == t->sbd) {
            return t;
        }

        if (sbd < t->sbd) {
            return search(sbd, t->left);
        }

        if (sbd > t->sbd) {
            return search(sbd, t->right);
        }
    }

    void print(Node * & t)
    {
        if (t == NULL)
        {
            return;
        }

        print(t->left);
        std::cout << "So bao danh " << t->sbd << " co ho ten la: " << t->hoTen << std::endl;
        print(t->right);
    }
};

int main()
{
	BSTree bst;
	
	// Chen mot so sinh vien moi vao cay.
	bst.insert(5, "Tuan");
	bst.insert(6, "Lan");
	bst.insert(3, "Cong");
	bst.insert(8, "Huong");
	bst.insert(7, "Binh");
	bst.insert(4, "Hai");
	bst.insert(2, "Son");
	
	// Tim hai sinh vien co so bao danh 4 va 9.
	Node * n1 = bst.search(4);
	Node * n2 = bst.search(9);
	
    bst.print();

	// In ket qua tim kiem
	if (n1 != NULL)
    {
		std::cout << "Sinh vien voi SBD=4 la " << n1->hoTen << std::endl;
    }

    if (n2 == NULL)
	{
        std::cout << "Khong tim thay sinh vien voi SBD=9" << std::endl;
    }

	// Lam rong cay.
	bst.makeEmpty();
	if (bst.isEmpty())
    {
		std::cout << "Cay da bi xoa rong" << std::endl;
    }

	return 0;
}
