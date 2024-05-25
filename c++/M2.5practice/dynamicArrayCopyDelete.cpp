#include<bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
    for (int i = size; i < m; i++)
    {
        cin >> b[i];
    }
    delete[] a;
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
     
}