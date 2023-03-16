// code by savir singh

#include <bits/stdc++.h>
using namespace std;
 
const int MM = 101;
 
int n, q, yellow[MM], red[MM];
 
int main() {
    cin >> n >> q;
    for (int i = 1, c, x; i <= q; i++) {
        cin >> c >> x;
        if (c == 1) yellow[x]++;
        else if (c == 2) red[x]++;
        else {
            if (yellow[x] >= 2 || red[x]) {
                cout << "Yes";
            }
            else cout << "No";
            cout << endl;
        }
    }
}
