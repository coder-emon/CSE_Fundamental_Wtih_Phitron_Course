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

int find_linked_list (Node* &head, int val){
    Node* temp = head;
    int flag = -1;
    int idx = 0;
    while(temp != NULL){
        if(temp->val == val){
            flag = idx;
            break;
        }
        temp = temp->next;
        idx++;
    }
    return flag;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int t;
    cin >> t;
    while(t--){
        head = NULL;
        tail = NULL;
        while(1){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head, tail, x);
        }
        int val;
        cin >> val;
        int result = find_linked_list(head, val);
        cout << result << endl;
    }
    


    return 0;
}