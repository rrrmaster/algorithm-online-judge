#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int b, n, x1, y1, x2, y2;
        std::cin >> b;
        std::cin >> n;

        while (b--) {
            std::cin >> x1 >> y1 >> x2 >> y2;
            if ((x1 + y1) % 2 != (x2 + y2) % 2) {
                std::cout << "no move\n";
                continue;
            }
            bool isCross1 = (x2 - x1) == (y2 - y1);
            bool isCross2 = (x2 - x1) == (y1 - y2);
            if (isCross1 && isCross2) std::cout << "0\n";
            else if (isCross1 || isCross2) std::cout << "1\n";
            else std::cout << "2\n";
        }
    }
}
