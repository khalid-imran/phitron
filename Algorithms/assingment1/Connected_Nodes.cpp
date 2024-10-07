#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> arr[n];
    while (e--) {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int q;
    cin >> q;
    vector<int> v(q);
    for (int i = 0; i < q; i++) {
        cin >> v[i];
    }

    for (int it : v) {
        if (arr[it].empty()) {
            cout << -1 << endl;
        } else {
            vector<int> c = arr[it];
            sort(c.begin(), c.end(), greater<int>());
            for (auto child : c)
            {
                cout << child << " ";
            }
            cout << endl;
        }
    }
    return 0;
}