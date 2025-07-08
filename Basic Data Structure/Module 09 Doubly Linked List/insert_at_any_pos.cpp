#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* prev;
        Node* next;
    Node (int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head == newnode;
        tail == newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}


void insert_at_any_pos(Node* &head, Node* &tail, int idx, int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i = 1; i < idx; i++){
        temp = temp->next;
    }
    //insert at any position insert any position without head and tail. but i added a corner case for if any insert at 0 index then it will be inserted at head;
    if(idx == 0){
        insert_at_head(head,tail, val);
        return;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}

void print_forward(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    
    insert_at_any_pos(head, tail, 1, 50);

    print_forward(head);
    print_backward(tail);
    return 0;
}