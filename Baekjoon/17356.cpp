#include <iostream>
#include <cmath>

int main() {
    int a, b;
    std::cin >> a >> b;
    double m = (b - a) / 400.0;

    std::cout << 1 / (1 + std::pow(10.0, m));
}