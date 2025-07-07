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

int count_linked_list(Node* &head){
    Node* temp = head;
    int count = 0;
    while (temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int same_linked_list (Node* &head, Node* &head2){
    Node* temp = head;
    Node* temp2 = head2;
    int flag = 1;
    
    while(temp != NULL || temp2 != NULL){
        if(temp->val != temp2->val){
            flag = 0;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return flag;
}

int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    
    Node* head2 = NULL;
    Node* tail2 = NULL;

    
    
    while(1){
    int x;
    cin >> x;
    if(x == -1){
        break;
    }
    insert_at_tail(head1, tail1, x);
    }

    while(1){
    int x;
    cin >> x;
    if(x == -1){
        break;
    }
    insert_at_tail(head2, tail2, x);
    }
    
    int linked_List_1 = count_linked_list(head1);
    int linked_List_2 = count_linked_list(head2);
    
    if(linked_List_1 != linked_List_2){
        cout << "NO" << endl;
    }else{
        int flag = same_linked_list(head1, head2);
        if(flag == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    


    return 0;
}