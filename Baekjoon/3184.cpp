#include <iostream>
#include <cmath>
#include <utility>

#define SHEEP 'o'
#define WOLF 'v'

int r, c;
char grid[251][251];
bool visible[251][251];

int dir[][2] = {
        {1, 0},
        {-1, 0},
        {0, 1},
        {0, -1},
};

std::pair<int, int> dfs(int x, int y) {
    visible[y][x] = true;
    int sheep = 0, wolf = 0;
    if (grid[y][x] == SHEEP) sheep += 1;
    else if (grid[y][x] == WOLF) wolf += 1;

    for (int i = 0; i < 4; ++i) {
        int nx = x + dir[i][0];
        int ny = y + dir[i][1];
        if (0 <= nx && nx < c && 0 <= ny && ny < r && grid[ny][nx] != '#' && !visible[ny][nx]) {
            auto t = dfs(nx, ny);
            sheep += t.first;
            wolf += t.second;
        }
    }
    return {sheep, wolf};

}

int main() {
    std::cin >> r >> c;

    for (int y = 0; y < r; ++y) {
        for (int x = 0; x < c; ++x) {
            std::cin >> grid[y][x];
        }
    }

    int sheep = 0, wolf = 0;
    for (int y = 0; y < r; ++y) {
        for (int x = 0; x < c; ++x) {
            if (grid[y][x] != '#' && !visible[y][x]) {
                auto result = dfs(x, y);
                if (result.first > result.second) {
                    sheep += result.first;
                } else {
                    wolf += result.second;
                }
            }
        }
    }
    std::cout << sheep << ' ' << wolf;
}