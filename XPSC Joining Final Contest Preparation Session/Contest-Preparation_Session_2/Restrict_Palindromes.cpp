#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--){
	    int n;
	    cin >> n;
	    string s;
	    for(int i = 0; i < n; i++){
	        char ch = (i % 5) + 'a';
	        cout << ch;
	    }
	    cout << endl;
	}

    return 0;
}