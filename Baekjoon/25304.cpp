#include <iostream>

int main() {
    int n;
    long long int x, s = 0;

    std::cin >> x;
    std::cin >> n;
    while (n--) {
        int a, b;
        std::cin >> a >> b;
        s += a * b;
    }
    std::cout << (x == s ? "Yes" : "No");
}