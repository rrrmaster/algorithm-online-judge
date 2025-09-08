#include <iostream>
#include <string>
#include <regex>

int main() {
    int n;
    std::cin >> n;
    while (n--) {
        std::string str;
        std::regex re("([A-F]?)A+F+C+([A-F]?)");
        std::cin >> str;
        std::cout << (std::regex_match(str, re) ? "Infected!" : "Good") << '\n';
    }
}
