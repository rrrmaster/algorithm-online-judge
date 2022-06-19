#include <iostream>
#include <string>

bool horizontal[10][3] = {
        {1, 0, 1},
        {0, 0, 0},
        {1, 1, 1},
        {1, 1, 1},
        {0, 1, 0},
        {1, 1, 1},
        {1, 1, 1},
        {1, 0, 0},
        {1, 1, 1},
        {1, 1, 1},
};
bool vertical[10][4] = {
        {1, 1, 1, 1},
        {0, 1, 0, 1},
        {0, 1, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 1},
        {1, 0, 0, 1},
        {1, 0, 1, 1},
        {0, 1, 0, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 1}
};


int main() {
    int s;
    std::string n;
    while (std::cin >> s >> n && s != 0) {
        int m = n.size();
        char led[23][256] = {};

        int w = m * (s + 2) + m - 1;
        int h = 3 + (s * 2);

        for (int y = 0; y < h; ++y) {
            for (int x = 0; x < w; ++x) {
                led[y][x] = ' ';
            }
        }
        for (int i = 0; i < m; i++) {
            int index = n[i] - '0';
            int x_offset = i * (2 + s) + i;
            int y_offset = s + 1;
            for (int j = 0; j < s; ++j) {

                for (int k = 0; k < 3; ++k) {
                    if (horizontal[index][k]) {
                        int y = k * y_offset;
                        int x = x_offset + j + 1;
                        led[y][x] = '-';
                    }
                }
                for (int k = 0; k < 4; ++k) {
                    if (vertical[index][k]) {
                        int y = j + 1 + y_offset * (k / 2);
                        int x = x_offset + (s + 1) * (k % 2);
                        led[y][x] = '|';
                    }
                }

            }
        }

        for (int y = 0; y < h; ++y) {
            for (int x = 0; x < w; ++x) {
                std::cout << led[y][x];
            }
            std::cout << '\n';
        }
        std::cout << '\n';
    }
}
