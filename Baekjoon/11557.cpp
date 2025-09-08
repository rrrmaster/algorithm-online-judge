#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        int max = -1;
        std::string name;
        while (n--) {
            std::string a;
            int b;
            std::cin >> a >> b;
            if (b > max) {
                max = b;
                name = a;
            }
        }
        std::cout << name << '\n';
    }
}