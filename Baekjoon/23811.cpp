#include <iostream>

char alphabet[][6] = {
        "@@@@@",
        "@    ",
        "@@@@@",
        "@    ",
        "@@@@@",
};

int main() {
    int n;
    std::cin >> n;

    for (int y = 0; y < 5; ++y) {
        for (int r = 0; r < n; ++r) {
            for (int x = 0; x < 5; ++x) {
                for (int c = 0; c < n; ++c) {
                    if (alphabet[y][x] == ' ')
                        continue;
                    std::cout << (alphabet[y][x] == 'p' ? ' ' : alphabet[y][x]);
                }
            }
            std::cout << '\n';
        }
    }
}