#include <bits/stdc++.h>
using namespace std;
bool chocolate(int sum, int n, int arr[]) {
    if (sum % 2 != 0) {
       return false;
    } else {
        int s = sum / 2;
        bool dp[n + 1][s + 1];
        dp[0][0] = true;
        for (int i = 1; i <= s; i++) {
            dp[0][i] = false;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= s; j++) {
                if (arr[i - 1] <= s) {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][s]) {
            return true;
        } else {
            return false;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if(chocolate(sum, n, arr)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}