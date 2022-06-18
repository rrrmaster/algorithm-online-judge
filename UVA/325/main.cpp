#include <iostream>
#include <string>
#include <regex>
#include <algorithm>

const std::string WHITESPACE = " \n\r\t\f\v";

std::string ltrim(const std::string &s)
{
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == std::string::npos) ? "" : s.substr(start);
}

std::string rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

std::string trim(const std::string &s) {
    return rtrim(ltrim(s));
}
int main() {
    std::string str;
    while (std::getline(std::cin, str) && str != "*") {
        str = trim(str);
        std::regex regex(R"([+-]?\d+(\.\d+([eE][+-]?\d+)?|[eE][+-]?\d+))" );
        if(std::regex_match(str, regex))
            std::cout << str << " is legal.\n";
        else
            std::cout << str << " is illegal.\n";
    }
}
