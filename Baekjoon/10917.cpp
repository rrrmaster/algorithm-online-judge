#include <iostream>
#include <queue>
#include <vector>

int n, m;
bool visible[200001];
std::vector<int> list[200001];

int bfs() {
    int c = 0;
    std::queue<int> q({1});
    visible[1] = true;

    while (!q.empty()) {
        std::queue<int> temp_q;

        if (visible[n] != 0) {
            return c;
        }

        while (!q.empty()) {
            int pos = q.front();
            q.pop();
            for (int movePos: list[pos]) {
                if (visible[movePos] == 0) {
                    visible[movePos] = pos;
                    temp_q.push(movePos);
                }
            }
        }
        c++;
        q = temp_q;
    }
    return -1;
}

int main() {
    std::cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int x, y;
        std::cin >> x >> y;
        list[x].push_back(y);
    }
    std::cout << bfs();
}