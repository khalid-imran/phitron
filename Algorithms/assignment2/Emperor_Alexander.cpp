#include <bits/stdc++.h>
using namespace std;
class Edge {
    public:
        int u, v, w;
        Edge(int u, int v, int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};
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
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsuInit(n);
    vector<Edge> edges;
    while (e--) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }
    sort(edges.begin(), edges.end(), cmp);
    int totalCost = 0;
    int edgeUsed = 0;
    int closedRoads = 0;
    for (Edge edge : edges) {
        int leaderU = findLeader(edge.u);
        int leaderV = findLeader(edge.v);
        if (leaderU != leaderV) {
            unionSize(edge.u, edge.v);
            totalCost += edge.w;
            edgeUsed++;
        }
        else {
            closedRoads++;
        }
    }
    if (edgeUsed == n - 1) {
        cout << closedRoads << " " << totalCost << endl;
    } else {
        cout << "Not Possible" << endl;
    }
    return 0;
}