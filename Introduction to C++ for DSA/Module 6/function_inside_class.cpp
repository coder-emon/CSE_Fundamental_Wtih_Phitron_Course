#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void fun(){
        cout << "Total Marks of " << this->name << " " << this->math + this->english << endl;
    }
};
int main()
{
    Student rahim("Rahim", 5, 45, 76);
    rahim.fun();
    Student karim("Karim", 7, 67, 57);
    karim.fun();
    return 0;
}