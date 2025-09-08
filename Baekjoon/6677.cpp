#include <iostream>
#include <string>
#include <sstream>

char grid[75][75] = {};

void draw(int x, int y, char i) {
    if (grid[y][x] == ' ') {
        grid[y][x] = i;
    } else {
        if (i == 'o') {
            if (grid[y][x] == 'o' || grid[y][x] == ' ')
                grid[y][x] = 'o';
            else
                grid[y][x] = '*';
        } else if (i == '/') {
            if (grid[y][x] == '/')
                grid[y][x] = '/';
            else if (grid[y][x] == '\\' || grid[y][x] == 'x')
                grid[y][x] = 'x';
            else
                grid[y][x] = '*';
        } else if (i == '\\') {
            if (grid[y][x] == '\\')
                grid[y][x] = '\\';
            else if (grid[y][x] == '/' || grid[y][x] == 'x')
                grid[y][x] = 'x';
            else
                grid[y][x] = '*';
        } else if (i == '|') {
            if (grid[y][x] == '|')
                grid[y][x] = '|';
            else if (grid[y][x] == '-' || grid[y][x] == '+')
                grid[y][x] = '+';
            else
                grid[y][x] = '*';

        } else if (i == '-') {
            if (grid[y][x] == '-')
                grid[y][x] = '-';
            else if (grid[y][x] == '|' || grid[y][x] == '+')
                grid[y][x] = '+';
            else
                grid[y][x] = '*';
        } else {
            if (grid[y][x] != i)
                grid[y][x] = '*';
        }
    }
}


int main() {
    int w, h;
    while (std::cin >> w >> h && w && h) {
        std::string str;

        for (int y = 0; y < h; ++y) {
            for (int x = 0; x < w; ++x) {
                grid[y][x] = ' ';
            }
        }

        while (std::getline(std::cin, str)) {
            std::stringstream stream(str);

            std::string command;
            stream >> command;


            if (command == "PRINT") {
                for (int y = 0; y < h + 2; ++y) {
                    for (int x = 0; x < w + 2; ++x) {
                        if ((x == 0 || x == w + 1) && (y == 0 || y == h + 1)) {
                            std::cout << '+';
                        } else if (x == 0 || x == w + 1) {
                            std::cout << '|';
                        } else if (y == 0 || y == h + 1) {
                            std::cout << '-';
                        } else {
                            std::cout << grid[y - 1][x - 1];
                        }
                    }
                    std::cout << '\n';
                }
                std::cout << '\n';
                break;
            } else if (command == "CLEAR") {
                int x1, y1, x2, y2;
                stream >> x1 >> y1 >> x2 >> y2;

                int min_x = std::min(x1, x2), max_x = std::max(x1, x2);
                int min_y = std::min(y1, y2), max_y = std::max(y1, y2);

                for (int y = min_y; y <= max_y; ++y) {
                    for (int x = min_x; x <= max_x; ++x) {
                        grid[y - 1][x - 1] = ' ';
                    }
                }
            } else if (command == "POINT") {
                int x = 0, y = 0;
                stream >> x;
                stream >> y;
                draw(x - 1, y - 1, 'o');

            } else if (command == "TEXT") {
                int x = 0, y = 0;
                std::string str;
                stream >> x >> y >> str;
                for (int i = 0; i < str.size(); ++i) {
                    draw(x + i - 1, y - 1, str[i]);
                }
            } else if (command == "LINE") {
                int x1, y1, x2, y2;
                stream >> x1 >> y1 >> x2 >> y2;
                int min_x = std::min(x1, x2), max_x = std::max(x1, x2);
                int min_y = std::min(y1, y2), max_y = std::max(y1, y2);

                if (min_x == max_x) {
                    for (int y = min_y; y <= max_y; ++y) {
                        draw(max_x - 1, y - 1, '|');
                    }
                } else if (min_y == max_y) {
                    for (int x = min_x; x <= max_x; ++x) {
                        draw(x - 1, max_y - 1, '-');
                    }
                } else if ((y2 - y1) / (x2 - x1) == 1) {
                    for (int i = 0; i <= (max_x - min_x); ++i) {
                        draw(min_x + i - 1, min_y + i - 1, '\\');
                    }
                } else {
                    for (int i = 0; i <= (max_x - min_x); ++i) {
                        draw(min_x + i - 1, max_y - i - 1, '/');
                    }
                }

            }
        }
    }
}
