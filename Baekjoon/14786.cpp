#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    double left = 0, right = 100000;
    while (left <= right) {
        double mid = (left + right) / 2.0;

        if (std::abs((a * mid + b * std::sin(mid)) - c)< 10e-10) {
            std::cout.precision(10);
            std::cout << mid;
            break;
        } else if (a * mid + b * std::sin(mid) < c) {
            left = mid;
        } else {
            right = mid;
        }
    }
}