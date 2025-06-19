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

int main()
{
    Student rahim(45, 7, 4.64);
    int r, c;
    double g;
    cin >> r >> c >> g;
    Student karim(r, c, g); //ineffective

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    
    return 0;
}