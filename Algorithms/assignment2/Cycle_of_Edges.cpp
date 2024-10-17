#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int par[N];
int gSize[N];
void dsuInit(int n) {
    for (int i = 1; i <= n; i++) {
        par[i] = -1;
        gSize[i] = 1;
    }
}

int findLeader(int n){
    if (par[n] == -1) {
        return n;
    }
    int leader  = findLeader(par[n]);
    par[n] = leader;
    return leader;
}

void unionSize(int a, int b) {
    int leader1 = findLeader(a);
    int leader2 = findLeader(b);
    if (gSize[leader1] > gSize[leader2]) {
        par[leader2] = leader1;
        gSize[leader1] += gSize[leader2];
    } else {
        par[leader1] = leader2;
        gSize[leader2] += gSize[leader1];
    }
}
int main() {
    int n, e;
    cin>> n >> e;
    int count = 0;
    dsuInit(n);
    while (e--) {
        int a, b;
        cin >> a >> b;
        int leader1 = findLeader(a); 
        int leader2 = findLeader(b); 
        if (leader1 == leader2) {
            count++;
        } else {
            unionSize(a,b);
        }
    }
    cout << count << endl;
    return 0;
}