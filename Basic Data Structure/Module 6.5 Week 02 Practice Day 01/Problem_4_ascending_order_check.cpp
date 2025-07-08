#include <bits/stdc++.h>
using namespace std;
int sz = 0;
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
    sz++;
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

bool ascending_order_check(Node* head){
    Node* temp = head;
    bool isAscending = true;
    while(temp->next != NULL){
        if(temp->val > temp->next->val){
            isAscending = false;
            break;
        }
        temp = temp->next;
    }
    return isAscending;
    
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(cin >> value){
        insert_at_tail(head, tail, value);
    }
    
    bool isAscending  = ascending_order_check(head);
    isAscending ? cout << "YES" : cout << "NO";
    return 0;
}