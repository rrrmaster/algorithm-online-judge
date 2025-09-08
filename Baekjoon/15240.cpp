#include <iostream>

int dirs[][2] = {
        {0, 1},
        {1, 0},
        {-1, 0},
        {0, -1},
};
int n, m;
char grid[1000][1000];
bool visible[1000][1000];

void dfs(int x, int y, char target, char fill) {
    visible[y][x] = true;
    grid[y][x] = fill;
    for (auto &dir: dirs) {
        int nx = x + dir[0];
        int ny = y + dir[1];

        if (0 <= nx && nx < m && 0 <= ny && ny < n && grid[ny][nx] == target && !visible[ny][nx]) {
            dfs(nx, ny, target, fill);
        }
    }
}

int main() {
    int x, y;
    char k;
    std::cin >> n >> m;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            std::cin >> grid[y][x];
        }
    }
    std::cin >> y >> x >> k;
    dfs(x, y, grid[y][x], k);
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            std::cout << grid[y][x];
        }
        std::cout << '\n';
    }
}
