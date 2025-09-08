#include <iostream>
#include <queue>
#include <utility>


int main() {
    int field[301][301];
    bool visible[301][301] = {};

    int n, m;
    std::cin >> n >> m;
    for (int y = 0; y < m; ++y) {
        for (int x = 0; x < n; ++x) {
            std::cin >> field[y][x];
        }
    }
    std::queue<std::pair<int, int>> q;
    q.push(std::pair<int, int>(0, 0));
    visible[0][0] = true;
    std::pair<int, int> dirs[2] = {
            std::pair<int, int>(1, 0),
            std::pair<int, int>(0, 1),
    };
    while (!q.empty()) {
        std::pair<int, int> p = q.front();
        q.pop();

        for (auto dir: dirs) {
            auto np = std::pair<int, int>(dir.first + p.first, dir.second + p.second);
            if (0 <= np.first && np.first < n && 0 <= np.second && np.second < m && field[np.second][np.first] == 1 &&
                !visible[np.second][np.first]) {
                visible[np.second][np.first] = true;
                q.push(np);
            }
        }

    }
    std::cout << (visible[m - 1][n - 1] ? "Yes" : "No");
}
