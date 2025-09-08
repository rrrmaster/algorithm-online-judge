#include <iostream>
#include <string>

bool isPalindrome(std::string str) {
    for (int i = 0; i < str.length(); ++i) {
        if(str[i] != str[str.size() - i -1])
            return false;
    }
    return true;
}
int main() {
    std::string str;
    std::cin >> str;
    std::cout << isPalindrome(str);
}