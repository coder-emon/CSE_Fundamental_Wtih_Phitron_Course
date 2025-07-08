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

int max_linked_list(Node* head){
    Node* temp = head;
    int max_value = INT_MIN;
   while(temp != NULL){
    if(temp->val > max_value){
        max_value = temp->val;
    }
    temp = temp->next;
   }
   return max_value;
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
    int maxValue = max_linked_list(head);
    cout << maxValue << endl;
   

    return 0;
}