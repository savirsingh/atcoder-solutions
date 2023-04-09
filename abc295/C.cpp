// code by savir singh
// C - Socks

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
int n;
set<int> counted;
map<int, int> cnt;
 
// driver code
bit32 main() {
    read(n);
    int ans = 0;
    vector<int> nums;
    for (int i = 1, a; i <= n; i++) {
        read(a); cnt[a]++;
        nums.push_back(a);
    }
    for (auto i : nums) {
        if (counted.find(i) != counted.end()) continue;
        counted.insert(i);
        //cout << cnt[i] << endl;
        ans += cnt[i] / 2;
    }
    cout << ans << endl;
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
