#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, t; 
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int isSorted = 1;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1]) {
                isSorted = 0;
                break;
            }
        }
        if (isSorted == 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}