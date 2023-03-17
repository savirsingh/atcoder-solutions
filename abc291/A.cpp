// code by savir singh
// A - camel Case

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

string s;

int32_t main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        char j = s[i];
        if (j < 97) {
            cout << i+1 << endl;
            break;
        }
    }
}
