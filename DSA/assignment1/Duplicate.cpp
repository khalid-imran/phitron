#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    vector<int> arr(n);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++)
    {
       if (arr[i] == arr[i+1]) {
        cout << "YES" << endl;
        found = 1;
        break;
       }
    }
    if(found == 0) {
        cout << "NO" << endl;   
    }
    return 0;
}