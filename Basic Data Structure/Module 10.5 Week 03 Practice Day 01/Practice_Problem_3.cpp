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

bool check_palindrome(Node* head, Node* tail){
    bool flag = true;
    for(Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev){
        if(i->val != j->val){
            flag = false;
            break;
        }
    }
    return flag;
}



void print_ll (Node* head){
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
    while (true)
    {
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head, tail, x);
    }

    if(check_palindrome(head, tail)){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}