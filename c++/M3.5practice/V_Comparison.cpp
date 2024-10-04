#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;
    int statement = 0; 
    if (s == '>') {
        statement = a > b;
    } else if (s == '<') {
        statement = a < b;
    } else {
        statement = a == b;
    }
    if (statement == 1) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
    return 0;
}

