// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

const int MM = 2e5+1;
const int mod = 998244353;

int n, a[MM], b[MM], dp[MM][2];

int32_t main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
    }
    dp[1][0] = 1;
    dp[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i-1] != a[i]) {
            dp[i][0] += dp[i-1][0];
        }
        if (b[i-1] != a[i]) {
            dp[i][0] += dp[i-1][1];
        }
        if (a[i-1] != b[i]) {
            dp[i][1] += dp[i-1][0];
        }
        if (b[i-1] != b[i]) {
            dp[i][1] += dp[i-1][1];
        }
        dp[i][0] %= mod;
        dp[i][1] %= mod;
    }
    cout << (dp[n][0] + dp[n][1]) % mod;
}
