#include <iostream>

int dirs[][2] = {
        {1, 0},
        {-1, 0},
        {0, 1},
        {0, -1}
};
int n, m;
char grid[600][600];
bool visible[600][600];

int dfs(int x, int y) {
    visible[y][x] = true;
    int count = 0;
    if (grid[y][x] == 'P') count = 1;
    for (int i = 0; i < 4; ++i) {
        int nx = x + dirs[i][0];
        int ny = y + dirs[i][1];

        if (0 <= nx && nx < m && 0 <= ny && ny < n && grid[ny][nx] != 'X' && !visible[ny][nx])
        {
            count += dfs(nx,ny);
        }
    }
    return count;
}

int main() {
    std::cin >> n >> m;

    int sr = -1, sc = -1;
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < m; ++c) {
            std::cin >> grid[r][c];
            if (grid[r][c] == 'I') {
                sr = r, sc = c;
            }
        }
    }
    int count = dfs(sc, sr);
    if (count)
        std::cout << count;
    else
        std::cout << "TT";
}
