// code by savir singh
// A - Double Click

#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    int n, d;
    cin >> n >> d;
    int s[n+1];
    int ans = -1;
    for (int i = 1; i <= n; i++) cin >> s[i];
    for (int i = 2; i <= n; i++) {
        if (s[i] > s[i-1] && s[i] - s[i-1] <= d) {
            ans = s[i];
            break;
        }
    }
    cout << ans << endl;
}
