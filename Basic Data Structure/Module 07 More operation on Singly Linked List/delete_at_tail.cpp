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
    Node* temp = tail;
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    temp->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void delete_at_tail_with_last_pos(Node* &head, Node* &tail, int idx){
    Node* temp = head;
    for(int i = 1; i < idx; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    tail =  temp;
}

void delete_at_tail(Node* &head, Node* &tail){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = NULL;
    tail = temp;
    delete deleteNode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int val;
        cin >> val;
        if(val == -1){
            break;
        }else{
            insert_at_tail(head, tail, val);
        }
    }

    delete_at_tail_with_last_pos(head,tail, 6);
    delete_at_tail(head, tail);
    delete_at_tail(head, tail);

    print_linked_list(head);

    
    return 0;
}