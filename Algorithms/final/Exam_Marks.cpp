#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool examMark(int n, int arr[], int target) {
    int s = 1000 - target;
    if (n == 0) {
        return false;
    }
    if (s == 0) {
        return true;
    }
    if (dp[n][s] != -1) {
         return dp[n][s];
    }
    if (arr[n - 1] <= s) {
        return dp[n][s] = examMark(n - 1, arr, s - arr[n - 1]) || examMark(n - 1, arr, s);
    } else {
        return dp[n][s] = examMark(n - 1, arr, s);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, target;
        cin >> n >> target;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                dp[i][j] = -1;
            }
        }
        if (examMark(n, arr, target)) {
             cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}