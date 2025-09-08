#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cin >> str;
    for (auto i: str) {
        if (i == 'B')std::cout << "v";
        else if (i == 'E')std::cout << "ye";
        else if (i == 'H')std::cout << "n";
        else if (i == 'P')std::cout << "r";
        else if (i == 'C')std::cout << "s";
        else if (i == 'Y')std::cout << "u";
        else if (i == 'X')std::cout << "h";
        else std::cout << (char)std::tolower(i);
    }
}
