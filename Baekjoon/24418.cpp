#include <iostream>

int grid[25][25];
int c1 = 1, c2 = 0;

int dp1(int n, int x, int y) {
    if (x == n || y == n) {
        return 0;
    }
    c1 += 1;
    return std::max(dp1(n, x + 1, y), dp1(n, x, y + 1)) + grid[y][x];
}

int dp2(int n, int x, int y) {
    int dp[27][27] = {0,};
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            c2 += 1;
            dp[i][j] = grid[i - 1][j - 1] + std::max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][n];
}

int main() {
    int n;
    std::cin >> n;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < n; ++x) {
            std::cin >> grid[y][x];
        }
    }
    dp1(n, 0, 0);
    dp2(n, 0, 0);
    std::cout << c1 << ' ' << c2;

}