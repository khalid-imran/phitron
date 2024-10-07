#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, e;
    cin >> n >> e;
    vector<int> arr[n];
    while (e--) {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;

        if (x < 0 || x >= n || y < 0 || y >= n) {
            cout << "NO" << endl;
            continue;
        }

        if (x == y) {
            cout << "YES" << endl;
            continue;
        }

        bool found = false;
        for (int k : arr[x]) {
            if (k == y) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}