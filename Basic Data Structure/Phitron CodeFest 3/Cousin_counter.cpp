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
        // 01 ber kore ana
        Node* p = q.front();
        q.pop();

        // 02 oi node niye kaj kora
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;
        
        
        //03 children push kora

        if(p->left)
            q.push(p->left); 
        if(p->right)
            q.push(p->right);
        
    }

    return root;
}




int main()
{

    Node* root = tree_input();
    
    
    return 0;
}