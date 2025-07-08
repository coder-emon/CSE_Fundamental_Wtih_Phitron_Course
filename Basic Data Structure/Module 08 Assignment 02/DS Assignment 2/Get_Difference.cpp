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
    Node* temp = tail;
    temp->next = newnode;
    tail = newnode;
}

int difference_of_max_min (Node* &head){
    Node* temp = head;
    int mx = INT_MIN;
    int mn = INT_MAX;
    while(temp != NULL){
        if(temp->val > mx){
            mx = temp->val;
        }
        if(temp->val < mn){
            mn = temp->val;
        }
        temp = temp->next;
    }
    int diff = mx - mn;
    return diff;
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

    cout << difference_of_max_min(head); 
    return 0;
}