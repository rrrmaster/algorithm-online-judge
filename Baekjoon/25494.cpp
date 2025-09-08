#include <iostream>


int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int result = 0;
        int a, b, c;
        std::cin >> a >> b >> c;
        for (int x = 1; x <= a; ++x) {
            for (int y = 1; y <= b; ++y) {
                for (int z = 1; z <= c; ++z) {
                    result += (x % y == y % z && y % z == z % x);
                }
            }
        }
        std::cout << result << '\n';
    }
}