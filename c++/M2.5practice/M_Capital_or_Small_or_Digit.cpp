#include <bits/stdc++.h>
using namespace std;
int main() {
    char n;
    cin >> n;
    if (n >= 'A' && n <= 'Z') {
        cout << "ALPHA" << endl; 
        cout << "IS CAPITAL" << endl; 
    } else if (n >= 'a' && n <= 'z') {
        cout << "ALPHA" << endl; 
        cout << "IS SMALL" << endl; 
    } else {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}