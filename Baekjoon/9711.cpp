#include <iostream>


int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;

    std::cin >> t;
    for (int c = 1; c <= t; ++c) {
        int p, q;
        std::cin >> p >> q;

        long a = 1, b = 0;
        for (int i = 1; i <= p; ++i) {
            long temp = b;
            b = a % q;
            a = a + temp;
            a %= q;
        }
        std::cout << "Case #" << c << ": " << b << '\n';
    }
}