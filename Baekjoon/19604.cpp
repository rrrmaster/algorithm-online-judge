#include <iostream>

struct Point {
    int x, y;
};

int main() {
    int n;
    Point min{101, 101}, max{-1, -1};
    std::cin >> n;
    while (n--) {
        Point p;
        scanf("%d,%d", &p.x, &p.y);

        min.x = std::min(min.x, p.x);
        min.y = std::min(min.y, p.y);
        max.x = std::max(max.x, p.x);
        max.y = std::max(max.y, p.y);
    }
    std::cout << min.x - 1 << ',' << min.y - 1 << '\n' << max.x + 1 << ',' << max.y + 1;
}