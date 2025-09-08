#include <iostream>

#define InCircle(x, y, r) (x*x)+(y*y)<=(r*r)

int main() {
    int c = 0;
    int w, h, x, y, p;

    std::cin >> w >> h >> x >> y >> p;
    int r = h / 2;
    for (int i = 0; i < p; ++i) {
        int px, py;
        std::cin >> px >> py;
        c += (x <= px && px <= x + w && y <= py && py <= y + h) || InCircle((px - x), (py - (y + r)), r)|| InCircle((px - (x + w)), (py - (y + r)), r);
    }
    std::cout << c;
}