#include <iostream>
#include <string>
#include <map>
#include <sstream>

int main() {
    std::string str;
    std::string a, b;
    std::map<std::string, std::string> map;
    
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    
    while (std::getline(std::cin, str)) {
        if (str.empty())
            break;

        std::istringstream strstream(str);

        strstream >> a >> b;
        map[b] = a;

    }
    while (std::cin >> str) {
        auto it = map.find(str);
        if (it != map.end()) {
            std::cout << it->second << '\n';
        } else {
            std::cout << "eh" << '\n';
        }
    }
}