#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
    Node (int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


void Inorder(Node* root){
    if(root == NULL)
        return;
    Inorder(root->left );   // left of root
    cout << root->val << " ";//print root
    Inorder(root->right);  //right of root
    }

int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    Inorder(root);
    return 0;
}