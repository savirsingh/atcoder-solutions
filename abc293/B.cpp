// code by savir singh
// B - Call the ID Number

#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int MAX = 2e5+2;

int n;
int called[MAX], ans = 0;
vector<int> res;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    memset(called, false, sizeof called);
    for (int i = 1, a; i <= n; i++) {
        cin >> a;
        if (called[i]) continue;
        called[a] = true;
    }
    for (int i = 1; i <= n; i++) {
        if (!called[i]) {
            ans++; res.push_back(i);
        }
    }
    cout << ans << endl;
    for (int i = 0; i < ans; i++) {
        cout << res[i];
        if (i != ans-1) cout << " ";
    }
    cout << endl;
}
