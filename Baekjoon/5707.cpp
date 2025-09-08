#include <iostream>
#include <algorithm>

int grid[101][101] = {};
int temp_grid[101][101] = {};
int dirs[][2] = {
        {1,  0},
        {-1, 0},
        {0,  1},
        {0,  -1},
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, r, c, k;
    while (std::cin >> n >> r >> c >> k && r && c) {
        for (int y = 0; y < r; ++y) {
            for (int x = 0; x < c; ++x) {
                std::cin >> grid[y][x];
            }
        }

        for (int turn = 0; turn < k; ++turn) {

            for (int y = 0; y < r; ++y) {
                for (int x = 0; x < c; ++x) {
                    temp_grid[y][x] = grid[y][x];
                }
            }
            for (int y = 0; y < r; ++y) {
                for (int x = 0; x < c; ++x) {
                    for (auto &dir: dirs) {
                        int temp_x = x + dir[0];
                        int temp_y = y + dir[1];

                        if (0 <= temp_x && temp_x < c && 0 <= temp_y && temp_y < r) {
                            if ((grid[y][x] + 1) % n == grid[temp_y][temp_x]) {
                                temp_grid[temp_y][temp_x] = grid[y][x];
                            }
                        }
                    }
                }
            }

            for (int y = 0; y < r; ++y) {
                for (int x = 0; x < c; ++x) {
                    grid[y][x] = temp_grid[y][x];
                }
            }
        }


        for (int y = 0; y < r; ++y) {
            for (int x = 0; x < c; ++x) {
                std::cout << grid[y][x];
                if (x + 1 != c)std::cout << ' ';
            }
            std::cout << '\n';
        }
    }

}