#include <iostream>
#include <map>
#include <string>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int k, m;
        std::map<char, int> map;
        std::cin >> k;
        for (int i = 0; i < k; ++i) {
            char a;
            int b;
            std::cin >> a >> b;
            map[a] = b;
        }
        int cents = 0;
        std::cin >> m;
        std::cin.ignore();
        while (m--) {
            std::string str;
            std::getline(std::cin, str);
            int size = str.size();
            for (int i = 0; i < size; ++i) {
                auto li = map.find(str[i]);
                if (li != map.end()) {
                    cents += li->second;
                }
            }
        }
        printf("%d.%02d$\n", cents / 100, cents % 100);
    }
}
