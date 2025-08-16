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


void lever_order(Node* root){
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){

        // 01 ber kore ana
        Node* f = q.front();
        q.pop();

        // O2 oi node niye kaj kora
        cout << f->val << " ";

        // 03 children push kora
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
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

    lever_order(root);
    
    return 0;
}