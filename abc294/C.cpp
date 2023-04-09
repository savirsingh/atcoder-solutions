// code by savir singh
// C - Merge Sequences

#include <bits/stdc++.h>
using namespace std;
 
const int MM = 1e5 + 1;
int n, m, a[MM], b[MM];
vector<int> c;
 
int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) c.push_back(a[i]);
    for (int i = 1; i <= m; i++) c.push_back(b[i]);
    sort(c.begin(), c.end());
    for (int i = 1; i <= n; i++) {
        int index = lower_bound(c.begin(), c.end(), a[i]) - c.begin();
        cout << index + 1;
        if (i != n) cout << " ";
    }
    cout << endl;
    for (int i = 1; i <= m; i++) {
        int index = lower_bound(c.begin(), c.end(), b[i]) - c.begin();
        cout << index + 1;
        if (i != m) cout << " ";
    }
    cout << endl;
}
