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

void level_nodes(Node* root, int x){
    int max_level = Max_Height(root);
    if(max_level < x){
        cout << "Invalid";
        return;
    }
    queue <pair<Node*, int>> q;
    if(root) q.push({root,0});
    while(!q.empty()){
        pair<Node*, int> parent = q.front();
        q.pop();
        Node* node = parent.first;
        int level = parent.second;

        if(level == x)
            cout << node->val << " ";
        
        if(node->left)
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level+1});
    }
    
}

int main()
{

    Node* root = tree_input();
    int x;
    cin >> x;
    level_nodes(root, x);
    return 0;
}