#include <iostream>
#include <string>

int main() {
    int n;
    std::string str;
    while (std::cin >> n && n) {
        std::cin >> str;
        int g = str.size() / n;

        for (int i = g; i <= str.size(); i += g) {
            for (int j = 0; j < g; ++j) {
                std::cout << str[(i - j - 1)];
            }
        }
        std::cout << '\n';
    }
}
