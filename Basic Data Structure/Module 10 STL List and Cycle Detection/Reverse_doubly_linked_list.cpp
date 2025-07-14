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
    newnode->prev= tail;
    tail = newnode;
}

void reverse_doubly_linked_list(Node* head, Node* tail){
    for(Node *i = head, *j = tail; i != j && i->prev != j; i = i->next,  j = j->prev){
            swap(i->val, j->val);
    }
    
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
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
    
    
    print_linked_list(head);

    reverse_doubly_linked_list(head, tail);
    print_linked_list(head);

    cout << head->val << endl;
    cout << tail->val << endl;
    return 0;
}