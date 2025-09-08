#include <iostream>

int main() {
    int n, a, b;
    std::cin >> n;
    std::cin >> a >> b;
    std::cout << std::min(n, a / 2 + b);
}