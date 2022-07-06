#include <iostream>
#include <map>
#include <vector>

int main() {
    int n;
    std::map<long, int> map;
    std::vector<long> orders;
    while (std::cin >> n) {
        auto it = map.find(n);
        if (it == map.end()) {
            map[n] = 1;
            orders.push_back(n);
        } else {
            map[n]++;
        }
    }
    for (auto &i: orders) {
        std::cout << i << ' ' << map[i] << '\n';
    }
}
