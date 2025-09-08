#include <iostream>

int main() {
    int x, y, m, p = 1;
    std::cin >> m;
    while (m-- && std::cin >> x >> y)p = p == x ? y : (p == y ? x : p);
    std::cout << p;
}