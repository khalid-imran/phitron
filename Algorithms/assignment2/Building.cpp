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
class Edge {
    public:
        int u, v, w;
        Edge(int u, int v, int w) {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};
bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}
int main() {
    int n, e;
    cin >> n >> e;
    dsuInit(n);
    vector<Edge> edgeList;
    while (e--) {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    int totalCost = 0;
    for (Edge ed : edgeList) {
        int leaderU = findLeader(ed.u);
        int leaderV = findLeader(ed.v);
        if (leaderU == leaderV) {
            continue;
        } else {
            unionSize(ed.u, ed.v);
            totalCost += ed.w;
        }
    }
    int firstBuilding = findLeader(1);
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (findLeader(i) != firstBuilding) {
            flag = true;
        }
        
    } 
    if (flag) {
        cout<< -1 <<endl;
    } else {
        cout<< totalCost <<endl;
    }
    return 0;
}