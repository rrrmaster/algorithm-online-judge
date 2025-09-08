#include <iostream>
#include <cmath>

int main() {
    long a;
    std::cin >> a;
    std::cout.precision(7);
    std::cout << std::fixed << std::sqrt(a) * 4;
}