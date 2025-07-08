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

int count_linked_list(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(cin >> value){
        insert_at_tail(head, tail, value);
    }
    
    cout << sz << endl;
    
    return 0;
}