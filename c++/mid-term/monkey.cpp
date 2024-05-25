#include<bits/stdc++.h>
using namespace std;
int main() {
    char s[199999];
    while (cin.getline(s, 100001))
    {
        sort(s, s+strlen(s));
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] != ' ') {
                cout << s[i];
            }
        }
        cout << endl;
    };
    return 0;
}