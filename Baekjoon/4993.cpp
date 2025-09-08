#include <iostream>

int dirs[][2] = {
        {0, 1},
        {1, 0},
        {-1, 0},
        {0, -1},
};
int n, m;
char grid[20][20];
bool visible[20][20];

int dfs(int x, int y) {
    visible[y][x] = true;
    int count = 1;
    for (auto &dir: dirs) {
        int nx = x + dir[0];
        int ny = y + dir[1];

        if (0 <= nx && nx < n && 0 <= ny && ny < m && grid[ny][nx] == '.' && !visible[ny][nx]) {
            count += dfs(nx, ny);
        }
    }
    return count;
}

int main() {

    while (std::cin >> n >> m && n && m) {
        for (int y = 0; y < m; ++y) {
            for (int x = 0; x < n; ++x) {
                std::cin >> grid[y][x];
                visible[y][x]= false;
            }
        }
        for (int y = 0; y < m; ++y) {
            for (int x = 0; x < n; ++x) {
                if (grid[y][x] == '@') {
                    std::cout << dfs(x, y) << '\n';
                }
            }
        }
    }
}
