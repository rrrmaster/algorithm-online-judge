#include <iostream>
#include <string>

using namespace std;

void depth(int d) {
    for (int i = 0; i < d * 2; ++i) {
        std::cout << ' ';
    }
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    int i = 0, d = 0;
    std::string temp = "";

    for (i = 0; i < str.size(); i++) {
        switch (str[i]) {
            case '{':
                depth(d);
                std::cout << '{' << '\n';
                d += 1;
                break;
            case '}':
                if (!temp.empty()) {
                    depth(d);
                    std::cout << temp << '\n';
                    temp = "";
                }
                d -= 1;
                depth(d);
                std::cout << '}';
                if (i + 1 < str.size() && str[i + 1] != '}')
                    std::cout << ',';
                std::cout << '\n';
                break;
            case ',':
                if (!temp.empty()) {
                    depth(d);
                    std::cout << temp;
                    if (i + 1 < str.size() && str[i + 1] != '}')
                        std::cout << ',';
                    std::cout << '\n';
                    temp = "";
                }
                break;
            default:
                temp += str[i];
                break;
        }

    }
}
