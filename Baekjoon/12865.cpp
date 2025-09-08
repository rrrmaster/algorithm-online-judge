#include <iostream>
#include <vector>
#include <cmath>

int n, k;
int dp[101][100001];
int w[101], v[101];

int main() {
    std::cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        std::cin >>w[i] >> v[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
                dp[i][j] = (w[i - 1] <= j) ?
                        std::max(v[i - 1] + dp[i - 1][j - w[i - 1]], dp[i - 1][j]) :
                        dp[i - 1][j];
        }
    }
    std::cout << dp[n][k];
}