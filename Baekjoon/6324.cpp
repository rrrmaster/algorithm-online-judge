#include<iostream>
#include <string>
#include <regex>

int main() {
    int t;
    std::cin >> t;
    std::regex regex(R"~((\w+)://([^/:]+)(:(\d+))?(\/(\S+))?)~");
    for (int i = 1; i <= t; ++i) {
        std::string str;
        std::smatch matches;

        std::cin >> str;
        std::regex_search(str, matches, regex);

        std::cout << "URL #" << i << '\n';
        std::cout << "Protocol = " << matches[1] << '\n';
        std::cout << "Host     = " << matches[2] << '\n';
        std::cout << "Port     = " << (matches[4].str().empty() ? "<default>" : matches[4].str()) << '\n';
        std::cout << "Path     = " << (matches[6].str().empty() ? "<default>" : matches[6].str()) << '\n';
        std::cout << '\n';
    }
}