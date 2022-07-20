#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

bool compare(std::string &s1, std::string &s2) {
    return s1.length() < s2.length();
}

int main() {
    int n;
    while (std::cin >> n) {
        std::vector<std::string> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }
        std::sort(v.begin(), v.end());
        int length = std::max_element(v.begin(), v.end(), compare)->length();
        int column = (60 - length) / (length + 2) + 1;
        int row = (n - 1) / column + 1;


        std::cout << "------------------------------------------------------------\n";
        for (int i = 0; i < row; ++i) {
            for (int j = i; j < n; j += row)
                std::cout << std::setw(length + 2) << std::setiosflags(std::ios::left) << v[j];
            std::cout << std::endl;
        }
    }
}
