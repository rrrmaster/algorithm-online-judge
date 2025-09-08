#include <iostream>
#include <cmath>

int main() {
    long long int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << (( ((c-(std::abs(a) + std::abs(b))) % 2 == 0 && std::abs(a) + std::abs(b) <= c) || std::abs(a) + std::abs(b) == c) ? "YES" : "NO");
}