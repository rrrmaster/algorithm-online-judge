#include <iostream>
#include <string>
#include <regex>

int main() {
    std::regex re("(pi|ka|chu)+");
    std::string str;
    std::cin >> str;
    std::cout << (std::regex_match(str, re) ? "YES" : "NO");
}
