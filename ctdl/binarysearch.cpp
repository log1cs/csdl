#include<iostream>

using namespace std;

template <typename T>
class BinarySearchTree {
    public:
        BinarySearchTree() {
            root = NULL;
        }

        ~BinarySearchTree()  {
            makeEmpty();
        }

        bool empty() {
            return (root == NULL);
        }

        void makeEmpty() {
            makeEmpty(root);
        }

        void insert(T e) {
            insert(x, root);
        }

    private:
        struct BinaryNode {
            T elem;
            BinaryNode *left;
            BinaryNode *right;
            BinaryNode(T e, BinaryNode *l, BinaryNode *r) 
            {
                left = l;
                right = r;
            }
        }

        void makeEmpty(BinaryNode * & t) {
            if (t == NULL)
            {
                return;
            }

            mEmpty(t->left);
            mEmpty(t->right);
            
            delete t;

            t = NULL;
        }

        void insert(T e, BinaryNode * & t)
        {
            if (t == NULL) {
                t = new BinaryNode(x, NULL, NULL);
            } else if (x < t->elem) {
                insert(x, t->left);
            } else if (x > t->elem) {
                insert(x, t->right);
            } else {
                // Do nothing
            }
        }

        void preOrder(BinaryNode *t)
        {
            if (t == NULL)
            {
                return;
            }

            cout << t->elem << " ";

            preOrder(t->left);
            preOrder(t->right);
        }
};



int main() {
    BinarySearchTree<char> bst;


}