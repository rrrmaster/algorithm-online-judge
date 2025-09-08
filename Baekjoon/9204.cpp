#include <iostream>
#include <utility>
#include <queue>
#include <stack>

std::pair<int, int> dirs[4] = {
        {1,  1},
        {1,  -1},
        {-1, 1},
        {-1, -1}
};

void bfs(std::pair<int, int> start, std::pair<int, int> end) {

    bool visible[8][8] = {};
    std::pair<int, int> history[8][8] = {};

    std::queue<std::pair<int, int>> q({start});

    visible[start.second][start.first] = true;

    for (int i = 0; i < 4; ++i) {
        std::queue<std::pair<int, int>> temp_q;

        if (visible[end.second][end.first]) {
            std::cout << i << ' ';
            std::stack<std::pair<int, int>> s;
            for (auto j = end; j != start; j = history[j.second][j.first]) {
                s.push(j);
            }
            s.push(start);

            while (!s.empty()) {
                auto temp = s.top();
                s.pop();
                std::cout << (char) (temp.first + 'A') << ' ' << (temp.second + 1) << ' ';

            }
            std::cout <<'\n';
            return;
        }

        while (!q.empty()) {
            auto pos = q.front();
            q.pop();
            for (auto dir: dirs) {
                for (int k = 0; pos.first + k * dir.first < 8 &&
                                pos.second + k * dir.second < 8 &&
                                pos.first + k * dir.first >= 0 &&
                                pos.second + k * dir.second >= 0;
                     k++) {
                    std::pair<int, int> next_pos = {pos.first + k * dir.first, pos.second + k * dir.second};
                    if (!visible[next_pos.second][next_pos.first]) {
                        visible[next_pos.second][next_pos.first] = true;
                        history[next_pos.second][next_pos.first] = pos;
                        temp_q.push({next_pos});
                    }
                }
            }
        }

        q = temp_q;
    }

    std::cout << "Impossible" << '\n';
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        char sx, ex;
        int sy, ey;
        std::cin >> sx >> sy >> ex >> ey;
        std::pair<int, int> start = {sx - 'A', sy - 1}, end = {ex - 'A', ey - 1};

        bfs(start, end);
    }
}