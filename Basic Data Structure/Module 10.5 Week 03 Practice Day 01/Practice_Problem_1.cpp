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

bool same_LL_checker(Node* head, Node* head2){
    Node* temp = head;
    Node* temp2 = head2;
    int flag = true;
    while(temp != NULL && temp2 != NULL){
        if(temp->val != temp2->val){
            flag = false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return flag;
}

int count_ll (Node* head){
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

    int x;
    while (true)
    {
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head, tail, x);
    }

    while (true)
    {
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head2, tail2, x);

    }
    
    int ll_1 = count_ll(head);
    int ll_2 = count_ll(head2);

    if(ll_1 != ll_2){
        cout << "NO" ;
    }else{
        same_LL_checker(head, head2) ? cout << "YES" : cout << "NO";
    }

    return 0;
}