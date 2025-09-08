#include <iostream>
#include <string>

int main() {
    std::string a, b;
    char o;
    std::cin >> a >> o >> b;

    if (o == '*') {
        std::cout << '1';
        int n = a.size() + b.size() - 2;
        for (int i = 0; i < n; ++i) std::cout << '0';
    } else {
        int a_size = a.size();
        int b_size = b.size();
        if (a_size == b_size) {
            std::cout << '2';
            for (int i = 0; i < b_size - 1; ++i) std::cout << '0';
        } else {
            std::cout << '1';
            int max = std::max(a_size, b_size);
            int min = std::min(a_size, b_size);
            for (int i = max - 1; i > 0; i--) {
                if (min == i)std::cout << '1';
                else std::cout << '0';
            }
        }
    }
}