// code by savir singh
// A - Swap Odd and Even

#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int MAX = 1e6+2;

string s;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    for (int i = 1; i <= s.size()/2; i++) {
        swap(s[2*i-2], s[2*i-1]);
    }
    cout << s << endl;
}
