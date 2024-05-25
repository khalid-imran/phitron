#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int section;
    int math_marks;
    int cls;
    Student(string name, int roll, int section, int math_marks, int cls)
    { 
        this->name = name;
        this->roll = roll;  
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    Student rahim("Rahim Islam", 10, 2, 85, 5);
    Student karim("Karim Islam", 11, 2, 87, 5);
    Student jobbar("Jobbar Howladar", 12, 2, 90, 5);
    if(rahim.math_marks > karim.math_marks && rahim.math_marks > jobbar.math_marks) {
        cout << rahim.name;
    } else if(karim.math_marks > rahim.math_marks && karim.math_marks > jobbar.math_marks) {
         cout << karim.name;
    } else {
         cout << jobbar.name;
    }
    return 0;
}