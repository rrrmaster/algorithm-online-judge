#include <iostream>
#include <queue>

struct vector2 {
    int x, y;
};


int n, m;
int t = 0;

char grid[101][101] = {};
vector2 dirs[] = {
        {-1, 0},
        {1, 0},
        {0, -1},
        {0, 1},
};

int main() {
    int ch = 0;

    //Input
    std::cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> grid[i][j];
            if (grid[i][j] == '1') {
                ch++;
            }
        }
    }

    while (true) {
        bool airs[101][101] = {};
        std::queue<vector2> q({{0, 0}});
        airs[0][0] = true;
        while (!q.empty()) {
            vector2 temp = q.front();
            q.pop();

            for (int i = 0; i < 4; ++i) {
                vector2 point = {temp.x + dirs[i].x, temp.y + dirs[i].y};
                if (0 <= point.x && point.x < m && 0 <= point.y && point.y < n &&
                    grid[point.y][point.x] == '0' && !airs[point.y][point.x]) {
                    airs[point.y][point.x] = true;
                    q.push(point);
                }
            }
        }

        for (int y = 0; y < n; ++y) {
            for (int x = 0; x < m; ++x) {
                if (grid[y][x] == '1') {
                    int airCount = 0;
                    for (int i = 0; i < 4; ++i) {

                        vector2 point = {x + dirs[i].x, y + dirs[i].y};

                        if (0 <= point.x && point.x < m && 0 <= point.y && point.y < n && airs[point.y][point.x]) {
                            airCount++;
                        }
                    }
                    if (airCount >= 2) {
                        grid[y][x] = '2';
                    }
                }
            }
        }
        for (int y = 0; y < n; ++y) {
            for (int x = 0; x < m; ++x) {
                if (grid[y][x] == '2') {
                    grid[y][x] = '0';
                    ch--;
                }
            }
        }
        t++;

        if (ch == 0) {
            break;
        }
    }

    //Output
    std::cout << t;
}
