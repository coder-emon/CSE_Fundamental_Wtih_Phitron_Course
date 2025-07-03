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
void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

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
void insert_at_any_pos(Node* &head, int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;

    for(int i = 1; i < idx; i++){
        temp = temp->next;
        if(temp == NULL){
            return;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
    
    
}

void print_linked_list(Node* head){
    Node* temp = head;
   while(temp != NULL){
       cout << temp->val << " ";
        temp = temp->next;
   }
}

int size_of_linked_list(Node* head){
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

    while(1){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }else{
            insert_at_tail(head, tail, x);
        }
    }

    int idx, val;
    while(cin >> idx >> val){
        int size = size_of_linked_list(head);
        if(idx > size){
            cout << "Invalid";
            cout << endl;
            continue;
        }else if(size == idx){
            insert_at_tail(head, tail, val);
        }else if(idx == 0){
            insert_at_head(head, tail, val);
        }else{
            insert_at_any_pos(head, idx, val);
        }
        print_linked_list(head);
        cout << endl;
    }
    
    return 0;
}