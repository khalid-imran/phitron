#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    char s ,q;
    cin >> a >> s >> b >> q >> c;
    int statement = 0; 
    long long int value = 0;
    if (s == '+') {
        if (a + b == c)
        {
            statement = 1;
        } else {
             value = a + b;
        }
        
    } else if (s == '-') {
        if (a - b == c)
        {
            statement = 1;
        } else {
             value = a - b;
        }
    } else if (s == '*') {
        if (a * b == c)
        {
            statement = 1;
        } else {
             value = a * b;
        }
    }
    if (statement == 1) {
        cout << "Yes" << endl;
    } else {
        cout << value << endl;
    }
    return 0;
}
