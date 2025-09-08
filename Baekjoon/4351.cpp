#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
    int n, m;
    std::map<std::string, int> map;

    std::cin >> n >> m;
    while (n--) {
        std::string a;
        int b;
        std::cin >> a >> b;
        map[a] = b;
    }
    while (m--) {
        std::string temp;
        int point = 0;
        while (std::getline(std::cin, temp) && temp != ".") {
            std::stringstream stream(temp);
            std::string a;
            while (stream >> a) {
                auto it = map.find(a);
                if (it != map.end()) point += map[a];
            }
        }
        std::cout << point << '\n';
    }
}
