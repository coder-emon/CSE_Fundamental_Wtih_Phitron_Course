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
void reverse_singly_ll(Node* &head, Node* &tail, Node* temp){
    
    if(temp->next == NULL){
        head = temp;
        return;
    }

    reverse_singly_ll(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}

void print_ll(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b;

    head->next = a;
    a->next = b;

    reverse_singly_ll(head, tail, head);
    print_ll(head);
    cout << "head --" << head->val << endl;
    cout << "tail --" << tail->val << endl;
    return 0;
}