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

int count_ll (Node* head){
    Node* temp = head;
    int count = 0;
    while(temp !=  NULL){
        temp = temp->next;
        count++;
    }
    return count ;
}

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_any_pos(Node *&head, Node *&tail, int index, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }

    new_node->next = temp->next;
    new_node->prev = temp;

    // Best practice: Check if temp is NULL before accessing next
    if (temp->next != NULL) // If not inserting at the end
    {
    temp->next->prev = new_node;
    }

    temp->next = new_node;

    if (new_node->next == NULL)
    {
        tail = new_node; // Update tail if inserted at the end
    }
}

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





void print_forward(Node* head){
    Node* temp = head;
    while(temp !=  NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* tail){
    Node* temp = tail;
    while(temp !=  NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    while(q--){
    int sz = count_ll(head);
    int x, v;
    cin >> x >> v;
    if(x < 0 || x > sz){
        cout << "Invalid" << endl;
    }else if(x == 0){
        insert_at_head(head, tail, v);
        print_forward(head);
        print_backward(tail);
    }else if(x == sz ){
        insert_at_tail(head, tail, v);
        print_forward(head);
        print_backward(tail);
    }else{
        insert_at_any_pos(head, tail, x, v);
        print_forward(head);
        print_backward(tail);
    }
    }
    
    return 0;
}