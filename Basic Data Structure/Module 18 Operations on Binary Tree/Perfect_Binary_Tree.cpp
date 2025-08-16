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

int Max_Height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0; // 0 - based height
    int l = Max_Height(root->left);
    int r = Max_Height(root->right);

    return max(l, r) + 1;
}

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

vector<int> descending_leaf(Node* root){
    vector<int> v;
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
            v.push_back(f->val);

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    return v;
}

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}

int main()
{

    Node* root = tree_input();
    int mx_depth = Max_Height(root);
    int Total_Nodes = count_nodes(root);
    int p_cal = pow(2, mx_depth + 1) - 1;
    if(Total_Nodes == p_cal){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}