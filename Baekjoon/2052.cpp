#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    printf("%.*f\n", n, std::pow(2.0, -n));
}