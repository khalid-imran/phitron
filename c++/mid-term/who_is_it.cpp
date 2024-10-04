#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int id;
        char section;
        int total_marks;

};
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Student a;
        cin >> a.id;
        char sAname[100];
        cin >> sAname;
        strcpy(a.name, sAname);
        cin >> a.section >> a.total_marks;
        
        Student b;
        cin >> b.id;
        char sBname[100];
        cin >> sBname;
        strcpy(b.name, sBname);
        cin >> b.section >> b.total_marks;

        Student c;
        cin >> c.id;
        char sCname[100];
        cin >> sCname;
        strcpy(c.name, sCname);
        cin >> c.section >> c.total_marks;

        if (a.total_marks > b.total_marks && a.total_marks > c.total_marks) {
            cout << a.id << " " << a.name  << " " << a.section << " " << a.total_marks << endl;
        } else if (b.total_marks > a.total_marks && b.total_marks > c.total_marks) {
            cout << b.id << " " << b.name  << " " << b.section << " " << b.total_marks << endl;
        } else if (c.total_marks > a.total_marks && c.total_marks > b.total_marks) {
            cout << c.id << " " << c.name  << " " << c.section << " " << c.total_marks << endl;
        } else if (a.total_marks == b.total_marks || a.total_marks == c.total_marks ) {
            if (a.total_marks == b.total_marks) {
                if(a.id < b.id) {
                    cout << a.id << " " << a.name  << " " << a.section << " " << a.total_marks << endl;
                } else {
                    cout << b.id << " " << b.name  << " " << b.section << " " << b.total_marks << endl;
                }
            } else if (a.total_marks == c.total_marks) {
                if(a.id < c.id) {
                    cout << a.id << " " << a.name  << " " << a.section << " " << a.total_marks << endl;
                } else {
                    cout << c.id << " " << c.name  << " " << c.section << " " << c.total_marks << endl;
                }
            }
        } else if (b.total_marks == c.total_marks || b.total_marks == a.total_marks ) {
            if (b.total_marks == c.total_marks) {
                if(b.id < c.id) {
                    cout << b.id << " " << b.name  << " " << b.section << " " << b.total_marks << endl;
                } else {
                    cout << c.id << " " << c.name  << " " << c.section << " " << c.total_marks << endl;
                }
            } else if (b.total_marks == a.total_marks) {
                if(b.id < a.id) {
                    cout << b.id << " " << b.name  << " " << b.section << " " << b.total_marks << endl;
                } else {
                    cout << a.id << " " << a.name  << " " << a.section << " " << a.total_marks << endl;
                }
            }
           
        } else if (c.total_marks == a.total_marks || c.total_marks == b.total_marks ) {
            if (c.total_marks == a.total_marks) {
                if(c.id < a.id) {
                    cout << c.id << " " << c.name  << " " << c.section << " " << c.total_marks << endl;
                } else {
                    cout << a.id << " " << a.name  << " " << a.section << " " << a.total_marks << endl;
                }
            } else if (c.total_marks == b.total_marks) {
                if(c.id < b.id) {
                    cout << c.id << " " << c.name  << " " << c.section << " " << c.total_marks << endl;
                } else {
                    cout << b.id << " " << b.name  << " " << b.section << " " << b.total_marks << endl;
                }
            }
           
        }
    }
    
    
    return 0;
}