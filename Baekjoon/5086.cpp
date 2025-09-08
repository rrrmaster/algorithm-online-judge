#include <iostream>

int main() {
    int a, b;
    while (std::cin >> a >> b && a && b) {

        bool factor = (b % a == 0);
        bool multiple = (a % b == 0);
        if (factor) std::cout << "factor\n";
        else if (multiple) std::cout << "multiple\n";
        else std::cout << "neither\n";
    }
}