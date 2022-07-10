#include <iostream>
#include <queue>
#include <utility>

typedef std::pair<int, int> point;

point dirs[] = {
        {1,  1},
        {0,  1},
        {-1, 1},

        {1,  0},
        {-1, 0},

        {1,  -1},
        {0,  -1},
        {-1, -1}
};

int main() {
    int n, m;
    while (std::cin >> n >> m && n && m) {
        char grid[100][100] = {};
        bool visible[100][100] = {};

        for (int y = 0; y < n; ++y) {
            for (int x = 0; x < m; ++x) {
                std::cin >> grid[y][x];
            }
        }

        int count = 0;
        for (int y = 0; y < n; ++y) {
            for (int x = 0; x < m; ++x) {
                if (grid[y][x] == '@' && !visible[y][x]) {
                    count++;

                    std::queue<point> queue({{x, y}});

                    while (!queue.empty()) {
                        point temp = queue.front();
                        queue.pop();
                        visible[temp.second][temp.first] = true;

                        for (auto &dir: dirs) {
                            point p = {dir.first + temp.first, dir.second + temp.second};
                            if (0 <= p.first && p.first < m && 0 <= p.second && p.second < n &&
                                !visible[p.second][p.first] && grid[p.second][p.first]=='@') {
                                queue.push(p);
                            }
                        }
                    }
                }
            }
        }

        std::cout << count << '\n';
    }
}
