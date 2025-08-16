#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a,b;

    // manually value assign
    // a.roll = 12;
    // a.gpa = 4.43;
    // char temp[100] = "Emon Howlader";
    // strcpy(a.name, temp);
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa ;

    cin.ignore();

    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa ;
    
    cout << a.name <<" "<< a.roll << " "<< a.gpa << endl;
    cout << b.name <<" "<< b.roll << " "<< b.gpa << endl;
    
    return 0;
}