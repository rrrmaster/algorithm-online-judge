#include <iostream>
#include <queue>
#include <utility>


int main() {
    char field[10][10];
    int visible[10][10] = {};

    for (int y = 0; y < 10; ++y) {
        for (int x = 0; x < 10; ++x) {
            std::cin >> field[y][x];
        }
    }


    std::queue<std::pair<int, int>> q;
    for (int y = 0; y < 10; ++y) {
        for (int x = 0; x < 10; ++x) {
            if (field[y][x] == 'B') {
                visible[y][x] = 1;
                q.push(std::pair<int, int>(x, y));
            }
        }
    }

    std::pair<int, int> dirs[4] = {
            std::pair<int, int>(1, 0),
            std::pair<int, int>(0, 1),
            std::pair<int, int>(-1, 0),
            std::pair<int, int>(0, -1),
    };
    while (!q.empty()) {
        std::pair<int, int> p = q.front();
        q.pop();
        if (field[p.second][p.first] == 'L') {
            std::cout << visible[p.second][p.first] - 2;
            break;
        }
        for (auto dir: dirs) {
            auto np = std::pair<int, int>(dir.first + p.first, dir.second + p.second);
            if (0 <= np.first && np.first < 10 && 0 <= np.second && np.second < 10 &&
                field[np.second][np.first] != 'R' && !visible[np.second][np.first]) {
                visible[np.second][np.first] = visible[p.second][p.first] + 1;
                q.push(np);
            }
        }

    }
}
