#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;

    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        int temp = str[i] - '0';
        sum += temp * temp * temp * temp * temp;
    }
    std::cout << sum;
}