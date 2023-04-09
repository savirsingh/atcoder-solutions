// code by savir singh
// B - ASCII Art

#include <bits/stdc++.h>
using namespace std;
 
const int MM = 101;
int h, w;
 
int main(){
    cin >> h >> w;
    for (int i = 1; i <= h; i++) {
        for (int j = 1, a; j <= w; j++) {
            cin >> a;
            string b = "A";
            b[0] += a - 1;
            if (a == 0) {
                cout << ".";
            }
            else cout << b;
        }
        cout << endl;
    }
}
