#include <iostream>
#include <utility>
#include <vector>

int grid[9][9];
std::vector<int> visible;
std::vector<std::pair<int, int>> v;
bool isComplate = false;

bool vertical(int x, int number) {
    bool c[9] = {};
    c[number - 1] = true;
    for (int i = 0; i < 9; ++i) {
        if (grid[i][x] == 0)
            continue;

        if (c[grid[i][x] - 1])
            return false;
        c[grid[i][x] - 1] = true;
    }
    return true;
}

bool horizontal(int y, int number) {
    bool c[9] = {};
    c[number - 1] = true;
    for (int i = 0; i < 9; ++i) {
        if (grid[y][i] == 0)
            continue;

        if (c[grid[y][i] - 1])
            return false;
        c[grid[y][i] - 1] = true;
    }
    return true;
}

bool cube(int x, int y, int number) {
    bool c[9] = {};
    c[number - 1] = true;
    int px = x / 3;
    int py = y / 3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (grid[py * 3 + i][px * 3 + j] == 0)
                continue;

            if (c[grid[py * 3 + i][px * 3 + j] - 1])
                return false;
            c[grid[py * 3 + i][px * 3 + j] - 1] = true;
        }
    }
    return true;
}

void backtracking(int depth) {
    if(isComplate) return;
    if (depth == v.size()) {
        isComplate = true;
        for (int y = 0; y < 9; ++y) {
            for (int x = 0; x < 9; ++x) {
                std::cout << grid[y][x] << ' ';
            }
            std::cout << '\n';
        }
        return;
    }

    std::pair<int, int> p = v[depth];
    for (int j = 1; j <= 9; ++j) {
        if (vertical(p.first, j) && horizontal(p.second, j) && cube(p.first,p.second,j)) {
            grid[p.second][p.first] = j;
            backtracking(depth + 1);
            grid[p.second][p.first] = 0;
        }
    }
}

int main() {
    for (int y = 0; y < 9; ++y) {
        for (int x = 0; x < 9; ++x) {
            std::cin >> grid[y][x];
            if (grid[y][x] == 0) {
                v.push_back({x, y});
            }
        }
    }
    visible.resize(v.size());
    backtracking(0);
}
