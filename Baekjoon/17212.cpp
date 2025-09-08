#include <iostream>

#define INF 987656321
int coins[] = {1, 2, 5, 7};
int dp[100000];

int solve(int x) {
    if (dp[x] != 0)return dp[x];

    if (x < 0) return INF;
    if (x == 0) return 0;
    int best = INF;
    for (auto c: coins) {
        best = std::min(best, solve(x - c) + 1);
    }
    dp[x] = best;
    return dp[x];
}

int main() {
    int c;
    std::cin >> c;
    std::cout << solve(c);
}