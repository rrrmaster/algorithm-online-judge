#include <iostream>
#include <algorithm>

int dirs[][2] = {
        {1,  1},
        {0,  1},
        {-1, 1},

        {1,  0},
        {-1, 0},

        {1,  -1},
        {0,  -1},
        {-1, -1},
};
int n, m;
char grid[100][100];
bool visible[100][100];

void dfs(int x, int y) {
    visible[y][x] = true;
    for (auto &dir: dirs) {
        int nx = x + dir[0];
        int ny = y + dir[1];

        if (0 <= nx && nx < m && 0 <= ny && ny < n && grid[ny][nx] == '#' && !visible[ny][nx]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    std::cin >> n >> m;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            std::cin >> grid[y][x];
            visible[y][x] = false;
        }
    }
    int c = 0;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            if (grid[y][x] == '#' && !visible[y][x]) {
                dfs(x, y);
                c++;
            }
        }
    }
    std::cout << c;
}
