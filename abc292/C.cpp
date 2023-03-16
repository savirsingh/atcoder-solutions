// code by savir singh
// C - Four Variables

#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define pii pair<int, int>
 
const int MM = 101;
 
int n;
int get_num_ways(int x) {
    int count = 0;
    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            int j = x / i;
            if (i * j == x) {
                count++;
                if (i != j) {
                    count++;
                }
            }
        }
    }
    return count;
}
 
 
int32_t main() {
    cin >> n;
    set<pii> vec;
    for (int i = 1; i < n; i++) {
        vec.insert(make_pair(i, n-i));
    }
    int ans = 0;
    for (auto i : vec) {
        ans += get_num_ways(i.first) * get_num_ways(i.second);
    }
    cout << ans << endl;
}
