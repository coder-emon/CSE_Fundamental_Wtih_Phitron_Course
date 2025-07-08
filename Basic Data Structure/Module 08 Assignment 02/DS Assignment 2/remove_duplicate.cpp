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
    Node* newnode  = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void remove_duplicate (Node* &head){
    Node* i = head;
    while(i != NULL){
        Node* prev = i;
        Node* j = i->next;
        while(j != NULL){
            if(i->val == j->val){
                Node* deleteNode = j;
                prev->next = j->next;
                j = j->next;
                delete deleteNode;
            }else{
                prev = j;
                j = j->next;
            }
        }
        i = i->next;
    }
    
}

void print_linked_list(Node* &head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(1){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head, tail, x);
    }

    remove_duplicate(head);
    print_linked_list(head);
    return 0;
}