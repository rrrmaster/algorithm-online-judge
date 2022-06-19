#include <iostream>
#include <string>
#include <algorithm>

char C5[][5][7] = {
        {".***..", "*...*.", "*****.", "*...*.", "*...*."},//A
        {"****..", "*...*.", "****..", "*...*.", "****.."},//B
        {".****.", "*...*.", "*.....", "*.....", ".****."},//C
        {"****..", "*...*.", "*...*.", "*...*.", "****.."},//D
        {"*****.", "*.....", "***...", "*.....", "*****."},//E
        {"*****.", "*.....", "***...", "*.....", "*....."},//F
        {".****.", "*.....", "*..**.", "*...*.", ".***.."},//G
        {"*...*.", "*...*.", "*****.", "*...*.", "*...*."},//H
        {"*****.", "..*...", "..*...", "..*...", "*****."},//I
        {"..***.", "...*..", "...*..", "*..*..", ".**..."},//J
        {"*...*.", "*..*..", "***...", "*..*..", "*...*."},//K
        {"*.....", "*.....", "*.....", "*.....", "*****."},//L
        {"*...*.", "**.**.", "*.*.*.", "*...*.", "*...*."},//M
        {"*...*.", "**..*.", "*.*.*.", "*..**.", "*...*."},//N
        {".***..", "*...*.", "*...*.", "*...*.", ".***.."},//O
        {"****..", "*...*.", "****..", "*.....", "*....."},//P
        {".***..", "*...*.", "*...*.", "*..**.", ".****."},//Q
        {"****..", "*...*.", "****..", "*..*..", "*...*."},//R
        {".****.", "*.....", ".***..", "....*.", "****.."},//S
        {"*****.", "*.*.*.", "..*...", "..*...", ".***.."},//T
        {"*...*.", "*...*.", "*...*.", "*...*.", ".***.."},//U
        {"*...*.", "*...*.", ".*.*..", ".*.*..", "..*..."},//V
        {"*...*.", "*...*.", "*.*.*.", "**.**.", "*...*."},//W
        {"*...*.", ".*.*..", "..*...", ".*.*..", "*...*."},//X
        {"*...*.", ".*.*..", "..*...", "..*...", "..*..."},//Y
        {"*****.", "...*..", "..*...", ".*....", "*****."},//Z
        {"......", "......", "......", "......", "......"},//BLANK
};
char grid[60][60];

void draw_small_text(int r, int c, char text) {

    if (r < 0 || r > 59 || c < 0 || c > 59)
        return;
    if (text != ' ')
        grid[r][c] = text;
}

void draw_large_text(int r, int c, char text) {
    for (int y = 0; y < 5; ++y) {
        for (int x = 0; x < 6; ++x) {

            int a = r + y;
            int b = c + x;
            if (a < 0 || a > 59 || b < 0 || b > 59)
                continue;
            if ('A' <= text && text <= 'Z' &&  C5[text - 'A'][y][x] == '*')
                grid[a][b] = C5[text - 'A'][y][x];

        }
    }
}

int main() {
    std::string command;
    std::fill(&grid[0][0], &grid[0][0] + sizeof(grid), '.');
    while (std::cin >> command) {
        if (command == ".EOP") {
            for (int y = 0; y < 60; ++y) {
                for (int x = 0; x < 60; ++x) {
                    std::cout << grid[y][x];
                    grid[y][x] = '.';
                }
                std::cout << '\n';
            }

            std::cout << '\n';
            for (int x = 0; x < 60; ++x) std::cout << '-';

            std::cout << '\n' << '\n';
        }
        if (command == ".P") {
            int r, c;
            std::string str, type;
            std::cin >> type;

            std::cin >> r;
            std::cin >> c;
            std::cin.ignore();
            std::getline(std::cin, str);

            str = str.substr(1, str.size() - 2);
            if (type == "C1") {
                for (int i = 0; i < str.size(); ++i) {
                    draw_small_text(r - 1, c - 1 + i, str[i]);
                }
            } else {
                for (int i = 0; i < str.size(); ++i) {
                    draw_large_text(r - 1, (c - 1) + i * 6, str[i]);
                }
            }

        }
        if (command == ".L") {
            int r;
            std::string str, type;
            std::cin >> type;

            std::cin >> r;
            std::cin.ignore();
            std::getline(std::cin, str);
            str = str.substr(1, str.size() - 2);
            if (type == "C1") {
                for (int i = 0; i < str.size(); ++i) {
                    draw_small_text(r - 1, i, str[i]);
                }
            } else {
                for (int i = 0; i < str.size(); ++i) {
                    draw_large_text(r - 1, i * 6, str[i]);
                }
            }
        }

        if (command == ".R") {
            int r;
            std::string str, type;
            std::cin >> type;

            std::cin >> r;
            std::cin.ignore();
            std::getline(std::cin, str);
            str = str.substr(1, str.size() - 2);
            if (type == "C1") {
                for (int i = 0; i < str.size(); ++i) {
                    draw_small_text(r - 1, 59 - (str.size() - i - 1), str[i]);
                }
            } else {
                for (int i = 0; i < str.size(); ++i) {
                    draw_large_text(r - 1, 59 - (str.size() - i - 1) * 6 - 5, str[i]);
                }
            }
        }
        if (command == ".C") {
            int r;
            std::string str, type;
            std::cin >> type;

            std::cin >> r;
            std::cin.ignore();
            std::getline(std::cin, str);
            str = str.substr(1, str.size() - 2);
            if (type == "C1") {
                int center = 30 - str.size() / 2;
                for (int i = 0; i < str.size(); ++i) {
                    draw_small_text(r - 1, center + i, str[i]);
                }
            } else {

                int center = 30 - str.size() * 3;

                for (int i = 0; i < str.size(); ++i) {
                    draw_large_text(r - 1, center + i * 6, str[i]);
                }
            }
        }
    }
}
