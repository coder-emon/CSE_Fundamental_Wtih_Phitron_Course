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

    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(1){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }else{
            insert_at_tail(head, tail, x);
        }
    }

    while(1){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }else{
            insert_at_tail(head2, tail2, x);
        }
    }

    int linked_list_1 = count_linked_list(head);
    int linked_list_2 = count_linked_list(head2);
    
    linked_list_1 == linked_list_2 ? cout << "YES" : cout <<"NO";

    return 0;
}