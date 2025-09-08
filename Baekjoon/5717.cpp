#include <iostream>

int main() {
    int m, f;
    while(std::cin >> m >> f && m && f)
    {
        std::cout << m + f << '\n';
    }
}
