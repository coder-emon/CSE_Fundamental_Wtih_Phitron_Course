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

void insert_at_any_pos(Node* &head, int idx, int val){
    Node* newnode = new Node(val);
    Node* temp = head;
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

void print_forward(Node* head){
    Node* temp = head;
    cout << "L -> ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* tail){
    Node* temp = tail;
    cout << "R -> ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int count_ll(Node* head){
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

    int q;
    cin >> q;
    while(q--){
        int x, v;
        cin >> x >> v;
        int sz = count_ll(head);
        if(x == 0){
            insert_at_head(head, tail, v);
            print_forward(head);
            print_backward(tail);
        }else if(x == sz){
            insert_at_tail(head, tail, v);
            print_forward(head);
            print_backward(tail);
        }else if (sz > x && x > 0){
            insert_at_any_pos(head, x, v);
            print_forward(head);
            print_backward(tail);
        }else{
            cout << "Invalid" << endl;
        }
    }
    
    return 0;
}