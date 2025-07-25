#include <bits/stdc++.h>
using namespace std;

class myStack{
    public:
        list <int> l;
        void push(int x){
            l.push_back(x);
        }

        void pop(){
            l.pop_back();
        }

        int top(){
            return l.back();
        }

        int size(){
            return l.size();
        }

        bool empty(){
            return l.empty();
        }
};

int main()
{
    myStack st1;
    myStack st2;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st1.push(x);
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        st2.push(x);
    }

    int flag = 1;
    if(m == n){
        while(!st1.empty() && !st2.empty()){
            if(st1.top() != st2.top()){
                flag = 0;
                break;
            }
            st1.pop();
            st2.pop();
        }
    }else{
        flag = 0;
    }

    
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}