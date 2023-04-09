// code by savir singh
// B - Bombs

#pragma GCC optimize("Ofast", "unroll-loops")
#pragma optimize( "", off )
#pragma optimize( "", on )
#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);
#define pii pair<int, int>
#define scanner(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
 
// fast i/o
void read(int &number)
{
    bool negative = false;
    register int c;
 
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
 
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}
 
// all vars
const int MM = 21;
int r, c;
char grid[MM][MM];
 
// driver code
bit32 main() {
    read(r); read(c);
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (grid[i][j] != '.' && grid[i][j] != '#') {
                for (int k = 1; k <= r; k++) {
                    for (int l = 1; l <= c; l++) {
                        if (grid[k][l] != '#' && grid[k][l] != '.') continue;
                        if (abs(i - k) + abs(j - l) <= (int)grid[i][j] - 48 && abs(i - k) + abs(j - l) != 0) {
                            //cout << abs(i - k) + abs(j - l) << " " << i << " " << j << " " << k << " " << l << endl;
                            grid[k][l] = '.';
                        }
                    }
                }
                grid[i][j] = '.';
            }
        }
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}
 
/*
 .----------------.  .----------------.  .----------------.  .----------------.  .----------------.
| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |
| |    _______   | || |      __      | || | ____   ____  | || |     _____    | || |  _______     | |
| |   /  ___  |  | || |     /  \     | || ||_  _| |_  _| | || |    |_   _|   | || | |_   __ \    | |
| |  |  (__ \_|  | || |    / /\ \    | || |  \ \   / /   | || |      | |     | || |   | |__) |   | |
| |   '.___`-.   | || |   / ____ \   | || |   \ \ / /    | || |      | |     | || |   |  __ /    | |
| |  |`\____) |  | || | _/ /    \ \_ | || |    \ ' /     | || |     _| |_    | || |  _| |  \ \_  | |
| |  |_______.'  | || ||____|  |____|| || |     \_/      | || |    |_____|   | || | |____| |___| | |
| |              | || |              | || |              | || |              | || |              | |
| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |
 '----------------'  '----------------'  '----------------'  '----------------'  '----------------'
*/
 
// - savir
/*
       /\     /\
      //\\___//\\
      \_  o o  _/
       /   ^   \
      /  '---'  \
     |__|_|_|__|
     |  | | |  |
     |__|_|_|__|
    /'-./  | \.-'\
   /   /   |   \   \
  (`-/-`)  |  (`-/-`)
   `"`"`"``|``"`"`"`
          \|/
           V
*/
