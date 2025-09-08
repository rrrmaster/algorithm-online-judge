#include <iostream>

int main() {
    int n, dp[1001] = {0, 1, 3};;
    std::cin >> n;
    for (int i = 3; i <= n; ++i) {
        dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;
    }
    std::cout << dp[n];
}