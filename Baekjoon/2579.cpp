#include <iostream>


int main() {
    int n;
    std::cin >> n;
    int arr[301] = {};
    for (int i = 1; i <= n; ++i) {
        std::cin >> arr[i];
    }
    int dp[301] = {};
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];

    for (int i = 3; i <= n; ++i) {
        dp[i] = std::max(dp[i - 3] + arr[i - 1], dp[i - 2]) + arr[i];
    }
    std::cout << dp[n];
}