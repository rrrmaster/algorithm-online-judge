#include <iostream>

int dp[31][31];

int main() {
    int n, k;
    std::cin >> n >> k;
    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= i; ++j) {
            dp[i][j] = dp[i - 1][j] + (j - 1 >= 0 ? dp[i - 1][j - 1] : 0);
        }
    }
    std::cout << dp[n-1][k-1] << ' ';

}