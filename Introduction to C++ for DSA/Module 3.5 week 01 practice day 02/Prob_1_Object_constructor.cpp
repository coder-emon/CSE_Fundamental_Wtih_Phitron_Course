#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
   char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student( char name[], int roll, char section, int math_marks, int cls){
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{

    Student rahim("Rahim", 15, 'A', 60, 9);
    Student karim("Karim", 17, 'A', 90, 9);
    Student rabbi("Rabbi", 13, 'A', 80, 9);
    
  
    if(rahim.math_marks > karim.math_marks && rahim.math_marks > rabbi.math_marks){
     cout << rahim.name;
    }else if( karim.math_marks > rahim.math_marks && karim.math_marks > rabbi.math_marks){
     cout << karim.name;   
    }else if(rabbi.math_marks > rahim.math_marks && rabbi.math_marks > karim.math_marks){
     cout << rabbi.name;       
 }
    return 0;
}