#include <iostream>

char grid[201][201];
int dp_array[201][201];

int solved(int h, int w) {
    for (int i = 0; i < h; ++i) {
        if (grid[i][0]=='X')break;
        dp_array[i][0] = 1;
    }
    for (int i = 0; i < w; ++i) {
        if (grid[0][i]=='X')break;
        dp_array[0][i] = 1;
    }
    for (int y = 1; y < h; ++y) {
        for (int x = 1; x < w; ++x) {
            if (grid[y][x] == 'X')continue;
            dp_array[y][x] = (dp_array[y][x - 1] + dp_array[y - 1][x]) % 1000000007;
        }
    }
    return dp_array[h - 1][w - 1];
}

int main() {
    int n, m;
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::cin >> n >> m;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            std::cin >> grid[y][x];
        }
    }

    std::cout << solved(n, m);
}
