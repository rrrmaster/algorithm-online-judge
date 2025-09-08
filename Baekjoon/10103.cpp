#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int a = 100, b = 100;
    while (n--) {
        int q, w;
        std::cin >> q >> w;
        a -= (q < w) ? w : 0;
        b -= (q > w) ? q : 0;
    }
    std::cout<< a << '\n' << b;
}