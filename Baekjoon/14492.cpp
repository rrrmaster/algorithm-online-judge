#include <iostream>

int main() {
    bool a[300][300];
    bool b[300][300];

    int n;
    std::cin >> n;

    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < n; ++x) {
            std::cin >> a[y][x];
        }
    }
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < n; ++x) {
            std::cin >> b[y][x];
        }
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            bool c = false;
            for (int k = 0; k < n; ++k) {
                c |= a[i][k] & b[k][j];
            }
            count += c;
        }
    }
    std::cout << count;
}
