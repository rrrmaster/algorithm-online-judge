#include <iostream>
#include <string>
#include <regex>

int main() {
    int n;
    std::string regexStr;
    std::cin >> n;
    std::cin >> regexStr;
    regexStr.replace(regexStr.find('*'),1,".*");
    std::regex re(regexStr);

    while (n--) {
        std::string str;
        std::cin >> str;
        std::cout << (std::regex_match(str, re) ? "DA" : "NE") << '\n';
    }
}