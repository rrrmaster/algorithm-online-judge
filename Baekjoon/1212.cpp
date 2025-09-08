#include <iostream>
#include <string>

std::string oct_to_binary(std::string oct) {
    std::string temp = "";

    if (oct == "0") {
        return "0";
    }
    bool flag = false;

    for (int i = 0; i < oct.size(); ++i) {
        int num = oct[i] - '0';
        for (int j = 2; j >= 0; j--) {
            int n = ((num >> j) & 1);
            if (!flag) {
                if (n == 0)continue;
                else flag = true;
            }
            temp += n + '0';
        }
    }
    return temp;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << oct_to_binary(str);
}