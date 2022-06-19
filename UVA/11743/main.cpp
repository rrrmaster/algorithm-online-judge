#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;

    std::cin.ignore();
    while (t--) {
        std::string str;
        std::getline(std::cin, str);

        int sum = 0;
        for (int i = 0; i < 16; ++i) {
            int temp = str[i + i / 4] - '0';
            sum += (i % 2 == 0) ? ((temp * 2) / 10 + (temp * 2) % 10) : temp;
        }

        if (sum % 10 == 0)
            std::cout << "Valid\n";
        else
            std::cout << "Invalid\n";
    }
}
