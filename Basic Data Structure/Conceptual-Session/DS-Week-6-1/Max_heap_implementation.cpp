#include <bits/stdc++.h>
using namespace std;

class Max_Heap {
    public:
        vector<int> v;
        void push(int val){
            v.push_back(val);
            int curr_idx = v.size() -1;
            while(curr_idx != 0){
                int parent_idx = (curr_idx -1) / 2;
                if(v[parent_idx] < v[curr_idx])
                    swap(v[parent_idx], v[curr_idx]);
                else
                    break;
                curr_idx = parent_idx;
            }
        }

        void Print_Heap(){
            for(auto x: v){
                cout << x << " ";
            }
            cout << endl;
        }

        int top(){
            return v.front();
        }

        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }

        void pop(){
            v[0] = v.back();
            v.pop_back();

            int curr_idx = 0;
            int last_idx = v.size() - 1;

            while(true){
                int left_idx = (curr_idx * 2) + 1;
                int right_idx = (curr_idx * 2) + 2;

                if(left_idx <= last_idx && right_idx > last_idx){
                    //only left child exist
                    if(v[left_idx] > v[curr_idx])
                        swap(v[left_idx], v[curr_idx]);
                    else
                        break;
                }else if(left_idx <= last_idx && right_idx <= last_idx){
                    //both child exist
                    if(v[left_idx] >= v[right_idx] && v[left_idx] > v[curr_idx]){
                        swap(v[left_idx], v[curr_idx]);
                    }else if(v[right_idx] >= v[left_idx] && v[right_idx] > v[curr_idx]){
                        swap(v[right_idx], v[curr_idx]);
                    }else{
                        break;
                    }
                }else{
                    // no child exist
                    break;
                }
            }
        }
};

int main()
{
    Max_Heap mhp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        mhp.push(val);
    }

    mhp.Print_Heap();
    mhp.pop();
    mhp.Print_Heap();
    if(!mhp.empty()){
        mhp.pop();
        mhp.Print_Heap();
    }
    if(!mhp.empty()){
        mhp.pop();
        mhp.Print_Heap();
    }
    if(!mhp.empty()){
        mhp.pop();
        mhp.Print_Heap();
    }
    if(!mhp.empty()){
        mhp.pop();
        mhp.Print_Heap();
    }

    return 0;
}