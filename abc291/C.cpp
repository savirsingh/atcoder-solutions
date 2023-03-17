// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

const int MM = 2e5+1;

int n;
set<pii> visited;
string s;

int32_t main() {
    cin >> n >> s;
    pii cur = make_pair(0, 0);
    visited.insert(cur);
    for (int i = 0; i < n; i++) {
        char nxt = s[i];
        if (nxt == 'R') cur.first++;
        else if (nxt == 'L') cur.first--;
        else if (nxt == 'U') cur.second++;
        else cur.second--;
        if (visited.find(cur) != visited.end()) {
            cout << "Yes" << endl;
            return false;
        }
        visited.insert(cur);
    }
    cout << "No" << endl;
}
