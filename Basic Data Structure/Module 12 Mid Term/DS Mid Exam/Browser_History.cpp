#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        string val;
        Node* prev;
        Node* next;
    Node (string val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, string val){
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

Node* findNode (Node* head, string val){
    Node* temp = head;
    while(temp != NULL){
        if(temp->val == val){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    string address;
    while(1){
        cin >> address;
        if(address == "end"){
            break;
        }
        insert_at_tail(head, tail, address);
    }

    Node* current = head;
    int q;
    cin >> q;
    while(q--){
        string cmd;
        cin >> cmd;
        if(cmd == "visit"){
            string addr;
            cin >> addr;
            Node* isFound = findNode( head, addr);
            if(isFound){
                current = isFound;
                cout << isFound->val << endl;
            }else{
                cout << "Not Available" <<endl;
            }
        }else if(cmd == "next"){
            if(current->next != NULL){
                current = current->next;
                cout << current->val << endl;
            }else{
                cout << "Not Available" << endl;
            }
        }else if(cmd == "prev"){
            if(current->prev != NULL){
                current = current->prev;
                cout << current->val << endl;
            }else{
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}