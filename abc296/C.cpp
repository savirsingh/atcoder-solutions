// code by savir singh
// C - Gap Existence

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(a) (int) (a).size()
#define rsz resize
#define pii pair<int, int>
#define eb emplace_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define fe(i,x,n) for(int i=x;i<=n;i++)
#define fr(i,x,n) for(int i=x;i>n;i--)
#define fre(i,x,n) for(int i=x;i>=n;i--)
#define mod 1000000007
#define mod2 998244353
#define INF 1e18
#define ld long double
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(x) int x; cin>>x; while(x--)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 
const int MM = 2e5 + 1;
int n, x;
set<int> s;
vector<int> v;
 
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
 
int32_t main() {
    __ cin >> n >> x;
    // O(n log n) time complexity
    fe(i, 1, n) {
        int j; cin >> j;
        v.pb(j);
        s.insert(j);
    }
    fe(i, 1, n) {
        int j = v[i - 1];
        if (s.find(j - x) != s.end()) {
            cout << "Yes" << endl;
            return false;
        }
    }
    cout << "No" << endl;
}
