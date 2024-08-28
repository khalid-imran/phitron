#include<bits/stdc++.h>
using namespace std;
int main() {
    queue<string> names;
    int tCase;
    cin >> tCase;
    for (int i = 0; i < tCase; i++)
    {

        int n;
        cin >> n;
        if (n == 0) {
            string name;
            cin >> name;
            names.push(name);
        } else {
            if (names.empty()) {
                cout << "Invalid" << endl;
                continue;
            }
            cout << names.front() << endl;
            names.pop();
        }
        
    }
    
    return 0;
}