#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mat(n,vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    //output
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // mat to list conversion 
    vector<vector<int>> adj_list(n, vector<int>());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] == 1){
                adj_list[i].push_back(j);
            }
        }
    }

    cout << "--------------" << endl;

    // output 
    for(int i = 0; i < n; i++){
        cout << i << " -> ";
        for(int val: adj_list[i]){
            cout << val << " ";
        }
        cout << endl;
    }


    cout << "----------------" << endl;

    // list to mat conversion 
    vector<vector<int>> mat2(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(auto x : adj_list[i]){
            mat2[i][x] = 1;
            // mat2[x][i] = 1;    //undirected
        }
    }

    // output 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}