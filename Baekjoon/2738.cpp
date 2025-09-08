#include <iostream>

int main() {
    int n, m, a[10000] = {};
    std::cin >> n >> m;
    for (int i = 0; i < 2; ++i) {
        for (int y = 0; y < n; ++y) {
            for (int x = 0; x < m; ++x) {
                int t;
                std::cin >> t;
                a[y * m + x] += t;
            }
        }
    }
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            std::cout << a[y * m + x] << ' ';
        }
        std::cout << '\n';
    }
}