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
    while(temp !=  NULL){
        temp = temp->next;
        count++;
    }
    return count ;
}

void delete_at_head(Node* &head, Node* &tail){
    if(head == NULL){
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void delete_at_tail(Node* &head, Node* &tail){
    if(head == NULL){
        return;
    }
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;

    if(tail == NULL){
        head = NULL;
        return;
    }

    tail->next = NULL;
}

void delete_at_any_pos(Node* head, int idx){
    Node* temp = head;
    for(int i = 1; i < idx; i++){
        temp = temp->next;
        if(temp->next == NULL){
            return;
        }
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

void print_forward(Node* head){
    Node* temp = head;
    while(temp !=  NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* tail){
    Node* temp = tail;
    while(temp !=  NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int x;
    while(true){
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head, tail, x);
    }
    print_forward(head);
    print_backward(tail);


    int idx;
    cin >> idx;

    int sz = count_ll(head);
    if(idx < 0 || idx >= sz){
        cout << "Invalid" << endl;
    }else if(idx == 0){
        delete_at_head(head, tail);
    }else if(idx == sz - 1){
        delete_at_tail(head, tail);
    }else{
        delete_at_any_pos(head, idx);
    }
    
    print_forward(head);
    print_backward(tail);

    
    return 0;
}