#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    while (std::getline(std::cin,str) && str != "#") {
        int sum = 0;
        for (int i = 0; i < str.size(); ++i) {
            if(std::isalpha(str[i]))
                sum += (i+1) * (str[i]-'A'+1);
        }
        std::cout << sum << '\n';
    }
}