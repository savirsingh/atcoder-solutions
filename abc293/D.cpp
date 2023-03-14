// code by savir singh

#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int MAX = 2e5+1;
 
int n, m, deg[MAX], cycle = 0, nocycle = 0;
vector<int> adj[MAX];
bool visited[MAX];
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1, a, c; i <= m; i++) {
        char b, d;
        cin >> a >> b >> c >> d;
        adj[a].push_back(c);
        adj[c].push_back(a);
        deg[a]++; deg[c]++;
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            deque<int> deq = {i};
            visited[i] = true;
            bool cycle1 = true;
            while (!deq.empty()) {
                int cur = deq.front();
                deq.pop_front();
                if (deg[cur] != 2) cycle1 = false;
                for (int nxt : adj[cur]) {
                    if (visited[nxt]) continue;
                    deq.push_back(nxt);
                    visited[nxt] = true;
                }
            }
            if (cycle1) cycle++;
            else nocycle++;
        }
    }
    cout << cycle << " " << nocycle << endl;
}
