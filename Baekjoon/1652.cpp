#include <iostream>
#include <string>

int main() {
    int n;
    char grid[101][101];

    std::cin >> n;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < n; ++x) {
            std::cin >> grid[y][x];
        }
    }

    int h = 0, v = 0;

    for (int y = 0; y < n; ++y) {

        int c = 0;
        for (int x = 0; x < n; ++x) {
            if (grid[y][x] == '.') {
                c += 1;
            } else {
                if (c >= 2)
                    h += 1;
                c = 0;
            }
        }

        if (c >= 2)
            h += 1;
    }
    for (int x = 0; x < n; ++x) {
        int c = 0;
        for (int y = 0; y < n; ++y) {
            if (grid[y][x] == '.') {
                c += 1;
            } else {
                if (c >= 2)
                    v += 1;
                c = 0;
            }
        }

        if (c >= 2)
            v += 1;
    }
    std::cout << h << ' ' << v;
}