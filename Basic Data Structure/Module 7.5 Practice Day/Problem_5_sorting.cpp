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
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    Node* &temp = tail;
    temp->next = newnode;
    tail = newnode;
}


void print_linked_list(Node* head){
    Node* temp = head;
   while(temp != NULL){
       cout << temp->val << " ";
        temp = temp->next;
   }
}

void sort_linked_list(Node* &head){
    
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->val < j->val){
                swap(i->val, j->val);
            }
        }
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
        }else{
            insert_at_tail(head, tail, x);
        }
    }
    sort_linked_list(head);
    print_linked_list(head);
   

    return 0;
}