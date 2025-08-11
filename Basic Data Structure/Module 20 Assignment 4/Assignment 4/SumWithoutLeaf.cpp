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

Node* tree_input(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else  root = new Node(val);
    queue <Node*> q;
    if(root)q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left)
            q.push(p->left); 
        if(p->right)
            q.push(p->right);
        
    }

    return root;
}

int sum_without_leaf(Node* root){
    int sum = 0;
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        if (f->left != NULL || f->right != NULL)
            sum += f->val;

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    return sum;
}

int main()
{

    Node* root = tree_input();
    int sum = sum_without_leaf(root);
    cout << sum;
    return 0;
}