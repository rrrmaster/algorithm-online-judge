#include <iostream>
#include <string>
#include <cctype>

std::string getAlpahet(const std::string& str) {
    std::string temp;
    for (char c: str) {
        if('a'<=c&&c<='z')
            temp.push_back(c);
        else if('A'<=c&&c<='Z')
            temp.push_back(c-'A'+'a');
    }
    return temp;
}

bool isPalindrome(std::string str) {
    int n = str.size() ;
    for (int i = 0; i < n / 2; ++i) {
        if(str[i]!=str[n - i - 1]) return false;
    }
    return true;
}

int main() {
    std::string str;
    while (std::getline(std::cin, str) && str != "DONE") {
        std::cout << (isPalindrome( getAlpahet(str)) ? "You won't be eaten!" : "Uh oh..") << '\n';
    }
}
