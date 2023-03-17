// code by savir singh
// B - Qual B

#include <bits/stdc++.h>
using namespace std;
#define int long long
 
const int MM = 101;
 
int n, k;
string s;
bool go[MM];
 
int32_t main() {
    cin >> n >> k >> s;
    vector<int> want;
    memset(go, false, sizeof go);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'o') want.push_back(i);
    }
    int going = 0;
    for (int i = 0; i < k; i++) {
        go[want[i]] = true;
    }
    for (int i = 0; i < n; i++) {
        if (go[i]) cout << "o";
        else cout << "x";
    }
    cout << endl;
}
