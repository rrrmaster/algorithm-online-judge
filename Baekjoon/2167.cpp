#include <iostream>

int arr[301][301];
int sum[301][301];

int main() {
    int n, m, k;
    std::cin >> n >> m;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            std::cin >> arr[y][x];
        }
    }
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            sum[y][x] = arr[y][x]
                        + (y - 1 >= 0 ? sum[y - 1][x] : 0)
                        + (x - 1 >= 0 ? sum[y][x - 1] : 0)
                        - (y - 1 >= 0 && x >= 0 ? sum[y - 1][x - 1] : 0);
        }
    }
    std::cin >> k;
    while (k--) {
        int i, j, x, y;
        std::cin >> j >> i >> y >> x;
        x--, y--, i--, j--;
        std::cout << sum[y][x] - (i - 1 >= 0 ? sum[y][i - 1] : 0) - (j - 1 >= 0 ? sum[j - 1][x] : 0) +
                     (j - 1 >= 0 && i >= 0 ? sum[j - 1][i - 1] : 0) << '\n';
    }
}