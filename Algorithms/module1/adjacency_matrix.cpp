#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, e; 
    cin >> n >> e;
    int mat[n][n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    if ( mat[0][1] == 1) {
        cout<< "connection ase" << endl;
    } else {
        cout << "connection nai" << endl;
    }
    return 0;
}