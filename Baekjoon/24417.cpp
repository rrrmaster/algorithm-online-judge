#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int a = 1, b = 1, c = 1;
    for (int i = 3; i <= n; ++i) {
        c = (a + b) % 1000000007;
        a = b;
        b = c;
    }
    std::cout << c << ' ' << n - 2;
}