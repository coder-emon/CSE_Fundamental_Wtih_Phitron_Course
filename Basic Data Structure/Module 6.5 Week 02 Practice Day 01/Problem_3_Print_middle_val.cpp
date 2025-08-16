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

int count_linked_list(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void print_mid_linked_list(Node* head, int mid){
    Node* temp = head;

    for(int i = 1; i < mid; i++){
        temp = temp->next;
    }

    if(sz % 2 == 0){
        cout << temp->val << " " << temp->next->val<< endl;
    }else{
        cout << temp->next->val << endl;
    }
    
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(cin >> value){
        insert_at_tail(head, tail, value);
    }
    
    int mid = sz / 2;
    print_mid_linked_list(head, mid);

    
    return 0;
}