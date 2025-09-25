#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin >> n >> x >> y;
	
	int a = y/x;
	
	int res = ceil((1.0 * n) / a);
	
	cout << res;

	return 0;
}