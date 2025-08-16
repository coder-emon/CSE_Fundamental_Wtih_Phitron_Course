#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;
    Student(int r, int c, double g){
        roll = r;
        cls = c;
        gpa = g;
    }
};


Student fun(){
    Student karim(85, 9, 4356);
    return karim;
}

int main()
{
    Student rahim(45, 7, 4.64);
    
    Student obj = fun();

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    
    return 0;
}