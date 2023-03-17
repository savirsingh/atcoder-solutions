// code by savir singh
// A - Contest Result

#include <bits/stdc++.h>
using namespace std;
#define int long long
 
const int MM = 101;
 
int n, m, a[MM];
 
int32_t main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int score = 0;
    for (int i = 1, b; i <= m; i++) {
        cin >> b;
        score += a[b];
    }
    cout << score << endl;
}
