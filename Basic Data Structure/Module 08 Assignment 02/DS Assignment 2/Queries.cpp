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
    Node* newnode  = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_at_any_pos(Node* &head, Node* &tail, int idx, int size){
    Node* temp = head;
    if(idx == 0){
        Node* deletenode = head;
        head = temp->next;
        if(head == NULL){
            tail = NULL;
        } 
        delete deletenode;
        return;
    }
    if(idx == size -1){
        Node* temp2 = head;
        while(temp2->next->next != NULL){
            temp2 = temp2->next;
        }

        Node* deleteNode = temp2->next;
        temp2->next = NULL;
        tail = temp2;
        delete deleteNode;
        return;
    }
    for(int i = 1; i < idx; i++){
        if(temp->next == NULL){
            return ;
        }
        temp = temp->next;

    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}


int count_linked_list(Node* &head){
    Node* temp = head;
    int count = 0;
    while (temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void print_linked_list(Node* &head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    while(q--){
        int cnt = count_linked_list(head);
        int x, v;
        cin >> x >> v; 
        if(x == 0){
            insert_at_head(head, tail, v);
            print_linked_list(head);
            cout << endl;
        }else if( x == 1){
            insert_at_tail(head, tail, v);
            print_linked_list(head);
            cout << endl;
        }else if(x == 2){
            if(cnt > v){
            delete_at_any_pos(head, tail, v, cnt);
            print_linked_list(head);
            cout << endl;
            }else{
            print_linked_list(head);
            cout << endl;
            }
        }  
       
    }
    

    return 0;
}