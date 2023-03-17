// code by savir singh
// E - Transitivity

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
 
const int MM = 2001;
 
int n, m;
vector<int> adj[MM];
bool visited[MM];
int reachable = 0;
 
void bfs(int node) {
    for (int i = 1; i <= n; i++) {
        visited[i] = false;
    }
    deque<int> deq;
    deq.push_back(node);
    visited[node] = true;
    while (!deq.empty()) {
        int cur = deq.front();
        deq.pop_front();
        for (int nxt : adj[cur]) {
            if (visited[nxt]) continue;
            reachable++;
            visited[nxt] = true;
            deq.push_back(nxt);
        }
    }
}
 
int32_t main() {
    cin >> n >> m;
    for (int i = 1, u, v; i <= m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; i++) bfs(i);
    cout << reachable - m << endl;
}
