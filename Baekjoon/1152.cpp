#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);
    int c = 0;
    for (int i = 0; i < str.size();) {
        int j = i;
        if (str[j] != ' ') {
            c++;
            while (j < str.size() && str[j] != ' ') {
                j++;
            }
            i = j;
        } else {
            i++;
        }
    }
    std::cout << c;
}