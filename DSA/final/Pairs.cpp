#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        long long int number;
        Student(string name, int number) {
            this->name = name;
            this->number = number;
        }
};
class cmp {
    public:
        bool operator()(Student a, Student b) {
            if (a.name == b.name) {
                return a.number < b.number;
            }
            return a.name > b.name;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (a--)
    {
        string name;
        int number;
        cin >> name >> number;
        Student obj(name, number);
        pq.push(obj);
    }
     while (!pq.empty()) {
        cout <<  pq.top().name << " " << pq.top().number << endl;
        pq.pop();
    }
    return 0;
}