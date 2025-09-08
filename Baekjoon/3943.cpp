#include <iostream>
#include <cmath>

int main() {
    int t, n, max;
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::cin >> t;
    while (t--) {
        std::cin >> n;
        max = n;
        while (n != 1) {
            if (n % 2 == 0)n /= 2;
            else n = 3 * n + 1;
            max = std::max(max, n);
        }
        std::cout << max << '\n';
    }
}