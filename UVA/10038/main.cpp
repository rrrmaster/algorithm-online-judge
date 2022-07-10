#include <iostream>
#include <vector>

int main() {
    int n;
    while (std::cin >> n) {
        std::vector<int> v;
        for (int i = 0; i < n; ++i) {
            int temp;
            std::cin >> temp;
            v.push_back(temp);
        }

        bool flag = true;
        std::vector<bool> visible;
        visible.resize(n);
        for (int i = 0; i < n - 1; ++i) {
            int index = std::abs(v[i] - v[i + 1]);
            if (index < n) {
                visible[index] = true;
            }
        }
        for (int i = 1; i < n; ++i) {
            if (!visible[i]) flag = false;
        }
        std::cout << (flag ? "Jolly" : "Not jolly") << '\n';
    }
}
