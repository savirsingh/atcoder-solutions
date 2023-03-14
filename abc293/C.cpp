// code by savir singh
// C - Make Takahashi Happy

#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int MAX = 11;

int h, w, grid[MAX][MAX];
vector<vector<pair<int, int>>> paths;

// recursively calculate paths
void calcpath(int x, int y, vector<pair<int, int>> curpath) {
    curpath.push_back({x, y});
    if (x == h && y == w) {
        paths.push_back(curpath);
    }
    if (x != h) calcpath(x+1, y, curpath);
    if (y != w) calcpath(x, y+1, curpath);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> h >> w;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> grid[i][j];
        }
    }
    vector<pair<int, int>> curpath;
    calcpath(1, 1, curpath);
    int ans = 0;
    for (auto x : paths) {
        set<int> s;
        for (auto p : x) {
            s.insert(grid[p.first][p.second]);
        }
        if (s.size() == x.size()) ans++;
    }
    cout << ans << endl;
}
