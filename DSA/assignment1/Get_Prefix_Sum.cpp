#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> arr(n);
    vector<long long int> prefixSum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0) {
            prefixSum[i] = arr[i];
        } else {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout << prefixSum[i] << " ";
    }
    return 0;
}