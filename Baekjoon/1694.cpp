#include <iostream>
#include <algorithm>
#include <sstream>

char grid[8][8];
bool visible[8][8];

void attack(int x, int y) {
    if (x < 0)return;
    if (y < 0)return;
    if (x > 7)return;
    if (y > 7)return;
    visible[y][x] = true;
}

void pawn(char unit, int x, int y) {
    if (unit == 'P') {
        attack(x + 1, y - 1);
        attack(x - 1, y - 1);
    } else {
        attack(x + 1, y + 1);
        attack(x - 1, y + 1);
    }
}

void king(int x, int y) {

    attack(x + 1, y + 1);
    attack(x, y + 1);
    attack(x - 1, y + 1);

    attack(x - 1, y);
    attack(x + 1, y);

    attack(x + 1, y - 1);
    attack(x, y - 1);
    attack(x - 1, y - 1);
}

void bishop(int x, int y) {
    int dirs[][2] = {
            {1,  1},
            {-1, 1},
            {1,  -1},
            {-1, -1}
    };

    for (int i = 0; i < 4; ++i) {
        int tx = x + dirs[i][0], ty = y + dirs[i][1];
        while (grid[ty][tx] == '*') {
            attack(tx, ty);
            tx += dirs[i][0];
            ty += dirs[i][1];
        }
    }
}

void rock(int x, int y) {
    int dirs[][2] = {
            {1,  0},
            {-1, 0},
            {0,  1},
            {0,  -1}
    };

    for (int i = 0; i < 4; ++i) {
        int tx = x + dirs[i][0], ty = y + dirs[i][1];
        while (grid[ty][tx] == '*') {
            attack(tx, ty);
            tx += dirs[i][0];
            ty += dirs[i][1];
        }
    }
}

void queen(int x, int y) {
    int dirs[][2] = {
            {-1, -1},
            {0,  -1},
            {1,  -1},

            {-1, 0},
            {1,  0},

            {-1, 1},
            {0,  1},
            {1,  1},

    };

    for (int i = 0; i < 8; ++i) {
        int tx = x + dirs[i][0], ty = y + dirs[i][1];
        while (grid[ty][tx] == '*') {
            attack(tx, ty);
            tx += dirs[i][0];
            ty += dirs[i][1];
        }
    }
}

void knight(int x, int y) {
    int dirs[][2] = {
            {1,  2},
            {-1, 2},
            {1,  -2},
            {-1, -2},

            {2,  1},
            {2,  -1},
            {-2, 1},
            {-2, -1}
    };
    for (int i = 0; i < 8; ++i) {
        int tx = x + dirs[i][0], ty = y + dirs[i][1];
        attack(tx, ty);
    }
}

int main() {
    std::string str;
    while (std::getline(std::cin, str)) {
        std::stringstream stream(str);
        std::string temp;

        std::fill((char *) grid, (char *) grid + sizeof(grid) / sizeof(char), '*');
        std::fill((char *) visible, (char *) visible + sizeof(visible) / sizeof(bool), false);


        int y = 0;
        while (std::getline(stream, temp, '/')) {
            int x = 0;
            for (auto &a: temp) {
                if (x > 7)break;
                if ('0' <= a && a <= '9') {
                    x += a - '0';
                } else {
                    grid[y][x] = a;
                    visible[y][x] = true;
                    x++;

                }
            }
            y++;
        }

        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                switch (grid[i][j]) {
                    case 'P':
                    case 'p':
                        pawn(grid[i][j], j, i);
                        break;

                    case 'n':
                    case 'N':
                        knight(j, i);
                        break;

                    case 'k':
                    case 'K':
                        king(j, i);
                        break;

                    case 'b':
                    case 'B':
                        bishop(j, i);
                        break;

                    case 'q':
                    case 'Q':
                        queen(j, i);
                        break;

                    case 'r':
                    case 'R':
                        rock(j, i);
                        break;

                    default:
                        break;
                }
            }
        }

        int sum = 0;

        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                sum += (visible[i][j] == 0 ? 1 : 0);
            }
        }
        std::cout << sum << '\n';
    }
}