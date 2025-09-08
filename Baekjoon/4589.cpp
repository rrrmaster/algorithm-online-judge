#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::cout << "Gnomes:" << '\n';
    while(n--) {
        int a,b,c;
        std::cin >> a >> b >> c;
        std::cout << (std::signbit(a-b) == std::signbit(b-c) ? "Ordered" : "Unordered") << '\n';
    }
}