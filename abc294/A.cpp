// code by savir singh
// A - Filter

#include <bits/stdc++.h>
using namespace std;
 
const int MM = 101;
int n;
 
int main(){
    cin >> n;
    vector<int> ans;
    for (int i = 1, a; i <= n; i++) {
        cin >> a;
        if (a % 2 == 0) ans.push_back(a);
    }
    for (int i = 0; i < ans.size() - 1; i++) {
        cout << ans[i] << " ";
    }
    cout << ans[ans.size()-1] << endl;
}
