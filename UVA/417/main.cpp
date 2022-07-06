#include <iostream>
#include <map>
#include <string>

int index;
std::map<std::string, int> map;

void word_index(std::string str, int len) {

    if (str.size() == len) {
        map[str] = index++;
        return;
    }
    char lastLetter = str.empty() ? 'a' : str[str.size() - 1] + 1;

    for (char i = lastLetter; i <= 'z'; ++i) {
        word_index(str + i, len);
    }
}

int main() {
    std::string str;
    index = 1;
    for (size_t len = 1; len <= 5; ++len)
        word_index("", len);

    while (std::cin >> str) {
        std::cout << map[str] << '\n';
    }
}
