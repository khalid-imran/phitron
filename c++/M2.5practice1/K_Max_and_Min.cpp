#include<bits/stdc++.h>
#include<algorithm>
#include<limits.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int maxInt = max({a, b,c});
    int minInt = min({a, b, c});
    cout << minInt << " " << maxInt;
    return 0;
}