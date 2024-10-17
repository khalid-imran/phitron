#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector <int> v1 = v;
        sort(v1.begin(), v1.end(), greater <int>());
        int leftIndex, rightIndex;
        for(int i = 0; i < n; i++) {
            if(v[i] == v1[0]) leftIndex = i;
            if(v[i] == v1[1]) rightIndex = i;
        }

        if(leftIndex < rightIndex) {
            cout << leftIndex << " " << rightIndex << endl;
        } else {
            cout << rightIndex << " " << leftIndex << endl;
        }
    }

    return 0;
}