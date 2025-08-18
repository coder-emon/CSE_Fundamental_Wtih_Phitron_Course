#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(100);
    pq.push(50);
    pq.push(120);
    pq.push(30);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() <<endl;
    pq.push(110);
    cout << pq.top() << endl;
    pq.pop();
    pq.pop();


    priority_queue<int, vector<int>, greater<int>> mpq;

    mpq.push(5);
    mpq.push(10);
    mpq.push(20);
    mpq.push(2);
    cout << mpq.top() << endl;
    mpq.pop();
    cout << mpq.top() << endl;
    mpq.push(4);
    cout << mpq.top() << endl;
    mpq.pop();
    cout << mpq.top() << endl;
    return 0;
}