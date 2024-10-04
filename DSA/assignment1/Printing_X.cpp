#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int printX = n/2;
    int printFor = 0;
    int printBack = n-1;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if(k == printX) {
                if (i == printX) {
                     cout << "X";
                } else {
                     cout << " ";
                }
            } else {
                 if(i == printFor) {
                cout << "\\";
                } else if(i == printBack) {
                    cout << "/";
                } else {
                    cout << " ";
                }
            }
        }
        printFor++;
        printBack--;
        cout << endl;
    }
    return 0;
}