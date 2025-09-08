#include <iostream>
#include <string>

int bowl_size(std::string &str) {
    int size = 10;
    int len = str.size();
    for (int i = 1; i < len; ++i) {
        size += (str[i - 1] != str[i]) ? 10 : 5;
    }
    return size;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << bowl_size(str);
}