#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node (int val){
        this->val = val;
        this->next = NULL;
    }
};


void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    int fre[101] = {0};
    while(cin >> value){
        fre[value]++;
        insert_at_tail(head, tail, value);
    }
    
    bool isDuplicate = false;
    for(int i = 1; i <= 100;i++){
        if(fre[i] >1){
            isDuplicate = true;
            break;
        }
    }
    if(isDuplicate){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}