#include<bits/stdc++.h>
using namespace std;
int main() {
    string names;
    getline(cin, names);
    stringstream ss(names);
    string name;
    int found = 0;
    while(ss>>name) {
        if(name == "Jessica") {
            found = 1;
        }
    }
    if(found == 1) {
        cout<< "YES" << endl;
    } else {
        cout<< "NO" << endl;
    }
    return 0;
}