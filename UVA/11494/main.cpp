#include <iostream>

int main() {
    int x1, y1, x2, y2;
    while (std::cin >> x1 >> y1 >> x2 >> y2 && x1) {
        bool horizontal = (y1 == y2);
        bool vertical = (x1 == x2);
        bool isCross1 = (x2 - x1) == (y2 - y1);
        bool isCross2 = (x2 - x1) == (y1 - y2);
        if (isCross1 && isCross2) std::cout << "0\n";
        else if (isCross1 || isCross2 || horizontal || vertical) std::cout << "1\n";
        else std::cout << "2\n";
    }
}
