#include <iostream>

struct point {
    int x, y;
};

int n, m;
bool visible[100][100] = {};
char grid[100][100] = {};
point dirs[] = {
        {-1, 1},
        {0,  1},
        {1,  1},

        {-1, 0},
        {1,  0},

        {-1, -1},
        {0,  -1},
        {1,  -1},
};

void dfs(int x, int y) {
    visible[y][x] = true;
    for (auto &dir: dirs) {
        point t = {dir.x + x, dir.y + y};
        if (0 <= t.x && t.x < m && 0 <= t.y && t.y < n && grid[t.y][t.x] == '#' && !visible[t.y][t.x]) {
            dfs(t.x, t.y);
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::cin >> n >> m;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            std::cin >> grid[y][x];
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
