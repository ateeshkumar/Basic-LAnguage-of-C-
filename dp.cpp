#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(k+1, vector<int>(n+1));
    for (int i = 1; i <= n; i++) {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            for (int l = 1; l <= j; l++) {
                dp[i][j] += dp[i-1][j-l];
            }
        }
    }
    cout << dp[k][n] << endl;
    return 0;
}
