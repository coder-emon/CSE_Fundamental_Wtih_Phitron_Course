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
    if(val == -1) root == NULL;
    else root =  new Node(val);
    queue <Node*> q;
    if(root) q.push(root);

    while(!q.empty()){
        //01 ber kore ana
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

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
map<int, int> mp;
void count_leaf_frequency(Node* root){
    if(root == NULL)
        return;
    if(root->left == NULL && root->right == NULL)
         mp[root->val]++;
    count_leaf_frequency(root->left);
    count_leaf_frequency(root->right);
    
}

int main()
{
    Node* root = tree_input();
    count_leaf_frequency(root);
    int max_count = 0;
    int max_count_num;
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second == max_count){
            if(it->first < max_count_num){
                max_count_num = it->first;
            }
        }else if(it->second > max_count){
            max_count = it->second;
            max_count_num = it->first;
        }
    }
    cout << max_count_num ;
    return 0;
}