// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define REP(i, n) for (int i = 0; i < (n); i++)
 
int a, x, m;
 
struct Matrix {
    int mat[2][2] = {{0, 0}, {0, 0}};
    Matrix operator *(Matrix other)  {
        Matrix product{{{0, 0}, {0, 0}}};
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    product.mat[i][k] += mat[i][j] * other.mat[j][k];
                    product.mat[i][k] %= m;
                }
            }
        }
        return product;
    }
};
 
Matrix matPow(Matrix a, int b) {
    Matrix res{{{1, 0}, {0, 1}}}; // initialize to identity matrix
    while (b) {
        if (b % 2 == 1) res = res * a;
        a = a * a;
        b /= 2;
    }
    return res;
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> a >> x >> m;
    Matrix temp;
    temp.mat[0][0] = a;
    temp.mat[0][1] = 1;
    temp.mat[1][1] = 1;
    Matrix ans = matPow(temp, x);
    cout << ans.mat[0][1] << endl;
}
