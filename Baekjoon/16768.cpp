#include <iostream>
#include <queue>

#define Wide 10

int n, k;
int xdirs[4] = {1, -1, 0, 0};
int ydirs[4] = {0, 0, 1, -1};

char grid[101][10] = {};
bool visible[101][10] = {};

int colorCount(int x, int y, char color) {
    int count = 1;
    visible[y][x] = true;
    for (int i = 0; i < 4; ++i) {
        int px = x + xdirs[i];
        int py = y + ydirs[i];
        if (0 <= px && px < Wide && 0 <= py && py < n && !visible[py][px] && grid[py][px] == color) {
            count += colorCount(px, py, color);
        }
    }
    return count;
}

void removeColor(int x, int y, char color) {
    grid[y][x] = '0';
    for (int i = 0; i < 4; ++i) {
        int px = x + xdirs[i];
        int py = y + ydirs[i];
        if (0 <= px && px < Wide && 0 <= py && py < n && grid[py][px] == color) {
            removeColor(px, py, color);
        }
    }
}

int main() {
    std::cin >> n >> k;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < Wide; ++x) {
            std::cin >> grid[y][x];
        }
    }
    while (true) {
        bool flag = true;

        for (int y = 0; y < n; ++y) {
            for (int x = 0; x < Wide; ++x) {
                visible[y][x] = false;
            }
        }
        for (int y = 0; y < n; ++y) {
            for (int x = 0; x < Wide; ++x) {
                char color = grid[y][x];
                if (color == '0')
                    continue;

                int count = colorCount(x, y, color);
                if (count >= k) {
                    flag = false;
                    removeColor(x, y, color);
                }
            }
        }
        for (int x = 0; x < Wide; ++x) {
            for (int y = n - 1; y >= 0; y--) {
                if (grid[y][x] == '0')continue;
                int g = y;
                while (g < n - 1 && grid[g + 1][x] == '0') {
                    grid[g + 1][x] = grid[g][x];
                    grid[g][x] = '0';
                    g += 1;
                }

            }
        }
        if (flag) {
            break;
        }
    }

    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < Wide; ++x) {
            std::cout << grid[y][x];
        }
        std::cout << '\n';
    }
}