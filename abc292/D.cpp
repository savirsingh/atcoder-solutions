// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

const int MM = 2e5+1;

int n, m, node[MM], edge[MM];
vector<pii> adj[MM];
bool visited[MM], used[MM];
vector<int> check;

void dfs(int node1, int idx) {
    if (visited[node1]) return;
    visited[node1] = true;
    for (auto nx : adj[node1]) {
        int nxt = nx.first;
        if (!used[nx.second]) edge[idx]++;
        used[nx.second] = true;
        dfs(nxt, idx);
    }
    node[idx]++;
}

int32_t main() {
    cin >> n >> m;
    for (int i = 1, u, v; i <= m; i++) {
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }
    memset(visited, false, sizeof visited);
    memset(used, false, sizeof used);
    for (int i = 1; i <= n; i++) {
        int idx = i;
        if (!visited[i]) {
            dfs(i, idx);
            check.push_back(idx);
        }
    }
    for (int i : check) {
        if (node[i] != edge[i]) {
            cout << "No" << endl;
            return false;
        }
    }
    cout << "Yes" << endl;
}
