#include <iostream>

int dirs[2][6][2] = {
        {
                {1, 0},
                {0, 1},
                {-1, 1},
                {-1, 0},
                {-1, -1},
                {0, -1}
        },
        {
                {1, 0},
                {0, 1},
                {1, 1},
                {-1, 0},
                {1, -1},
                {0, -1}
        }
};

int main() {
    int n, m;
    std::cin >> n >> m;
    char grid[51][51];
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            std::cin >> grid[y][x];
        }
    }
    
    int c = 0;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            if (grid[y][x] == '#') {
                int row = y % 2;

                if (grid[y][x] != '#')
                    continue;

                for (int dir = 0; dir < 6; ++dir) {
                    int nx = x + dirs[row][dir][0], ny = y + dirs[row][dir][1];
                    c += (0 <= nx && nx < m && 0 <= ny && ny < n && grid[ny][nx] == '.');
                }

            }
        }
    }
    std::cout << c;

}