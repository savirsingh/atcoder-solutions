// code by savir singh
// B - Trimmed Mean

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

int n;

int32_t main() {
    cin >> n;
    vector<int> nums;
    for (int i = 1, x; i <= 5*n; i++) {
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    double sum = 0;
    for (int i = n; i < 4*n; i++) {
        sum += nums[i];
    }
    sum /= 3*n;
    cout << fixed << setprecision(15) << sum << endl;
}
