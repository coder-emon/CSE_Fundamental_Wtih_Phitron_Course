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
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int count_ll (Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_any_pos(Node* &head, Node* &tail, int idx, int val){
    Node* temp = head;
    Node* newnode = new Node(val);
    if(idx == 0){
        insert_at_head(head, tail, val);
        return;
    }
    if(count_ll(head) == idx){
        insert_at_tail(head, tail, val);
        return;
    }
    for(int i = 1; i < idx; i++){
        temp = temp->next;
        if(temp->next == NULL){
            return;
        }
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;

}

void print_forward (Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward (Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    
    int q;
    cin >> q;
    while(q--){
        int x, v;
        int count = count_ll(head);
        cin >> x >> v;
        
        insert_at_any_pos(head, tail, x, v);
        if(count < x){
            cout << "Invalid" << endl;
        }else{
            print_forward(head);
            print_backward(tail);
        }

    }
    

    return 0;
}