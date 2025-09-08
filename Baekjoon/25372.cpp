#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string str;
        std::cin >> str;
        std::cout << (6 <= str.size() && str.size() <= 9 ? "yes" : "no")<<'\n';
    }
}