#include <iostream>

struct point {
    int x, y;
};

int n;
char grid[1000][1000] = {};
bool visible[1000][1000] = {};
point dirs[4] = {
        {1,  0},
        {-1, 0},
        {0,  1},
        {0,  -1}
};

void dfs(point p) {
    for (auto &dir: dirs) {
        point temp = {p.x + dir.x, p.y + dir.y};
        if (temp.x < 0 || temp.y < 0 || temp.x >= n || temp.y >= n)
            continue;

        if (grid[temp.y][temp.x] == '*' && !visible[temp.y][temp.x]) {
            visible[temp.y][temp.x] = true;
            dfs(temp);
        }
    }
}

int main() {
    std::cin >> n;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < n; ++x) {
            std::cin >> grid[y][x];
        }
    }
    int count = 0;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < n; ++x) {
            if (grid[y][x] == '*' && !visible[y][x]) {
                dfs({x, y});
                count++;
            }
        }
    }
    std::cout << count;
}