// code by savir singh
// A - CAPS LOCK

#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        s[i] -= 32;
    }
    cout << s << endl;
}
