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

bool isPalindrome (Node* head, Node* tail){
    Node* temp1 = head;
    Node* temp2 = tail;
    bool flag = true;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->val != temp2->val){
            flag = false;
        }
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
    return flag;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int num;
    while(1){
        cin >> num;
        if(num == -1){
            break;
        }
        insert_at_tail(head, tail, num);
    }
    bool flag = isPalindrome(head, tail);
    if(flag){
        cout << "YES" ;
    }else{
        cout << "NO" ;
    }
    return 0;
}