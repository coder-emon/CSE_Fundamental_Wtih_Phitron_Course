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
bool insert_at_any_pos(Node* &head, int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    if(idx == 0){
        newNode->next = head;
        head = newNode;
        return true;
    }
    for(int i = 1; i < idx; i++){
        temp = temp->next;
        if(temp == NULL){
            return false;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return true;
    
}

void print_linked_list(Node* head){
    Node* temp = head;
   while(temp != NULL){
       cout << temp->val << " ";
        temp = temp->next;
   }
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

    int q;
    cin >> q;
    while(q--){
        int idx, val;
        cin >> idx >> val;
        int result =  insert_at_any_pos(head, idx, val);
        if(result){
            print_linked_list(head);
        }else{
            cout << "Invalid";
        }
        cout << endl;
    }
   

    return 0;
}