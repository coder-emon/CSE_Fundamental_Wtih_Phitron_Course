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

void insert_at_head(Node* &head, int val){
    Node* newnode = new Node(val);
    sz++;
    if(head == NULL){
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

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

void insert_at_any_pos(Node* &head, int idx, int val){
    Node* newnode = new Node(val);
    sz++;
    Node* temp = head;
    for(int i = 1; i < idx; i++){
        temp = temp->next;
        if(temp->next == NULL) return;
    }
    newnode->next = temp->next;
    temp->next = newnode;

}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
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
    
    insert_at_head(head, 100);
    insert_at_head(head, 90);

    insert_at_tail(head, tail, 70);
    insert_at_tail(head, tail, 80);

    insert_at_any_pos(head, 3, 300);
    insert_at_any_pos(head, 3, 400);
    insert_at_any_pos(head, 4, 500);
    
    cout << "Size Of Linked List with global variable: " << sz << endl;
    cout << "Size Of Linked List with func: " << count_linked_list(head) << endl;
    cout <<"Head: "<< head->val << endl;
    print_linked_list(head);
    cout <<"Tail: "<< tail->val <<endl;

    
    return 0;
}