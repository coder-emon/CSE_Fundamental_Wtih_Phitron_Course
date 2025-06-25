#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int innerSpace = n -2;
    int outerSpace = 0; 
    
    //first half
    for(int i = 0; i < n /2; i++){
        for(int j = 0; j < outerSpace; j++){
            cout << " ";
        }
        cout << "\\";
        for(int j = 0; j < innerSpace; j++){
            cout << " ";
        }
        cout << "/";
        for(int j = 0; j < outerSpace; j++){
            cout << " ";
        }
        if(i != (n/2) -1){
            outerSpace++;
            innerSpace-=2;
        }
        cout << endl;
    }

    // middile x
    for(int j = 0; j < n/2; j++){
        cout << " ";
    }
    cout << "X";
    for(int j = 0; j < n/2; j++){
        cout << " ";
    }
    if(n != 1){
        cout << endl;
    }

    //second half
    for(int i = 0; i < n /2; i++){
        for(int j = 0; j < outerSpace; j++){
            cout << " ";
        }
        cout << "/";
        for(int j = 0; j < innerSpace; j++){
            cout << " ";
        }
        cout << "\\";
        for(int j = 0; j < outerSpace; j++){
            cout << " ";
        }
        
        outerSpace--;
        innerSpace+=2;
        if(i != (n/2) -1){
            cout << endl;
        }
    }


    return 0;
}