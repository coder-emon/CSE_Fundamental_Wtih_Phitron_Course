#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i= 0; i < n; i++){
		cin >> a[i];
	}
	
	int min = INT_MAX;
	for(int i = 0; i < n; i++){
		if(a[i] < min){
		 	min = a[i];	
		}
	}
	
	int fre[200001] = {0};
	
	for(int i = 0; i < n; i++){
		int val = a[i] + 100000;
		fre[val]++;
	}
	
	if(fre[min+100000] % 2 != 0){
		cout << "Lucky" ;
	}else{
		cout << "Unlucky";
	}
	return 0;
}