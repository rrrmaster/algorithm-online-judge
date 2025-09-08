#include <iostream>

int main() {
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;

    int n = a, t = 0;
    while (n != b) {
        if (n < 0) {
            n += 1;
            t += c;
        } else if (n == 0) {
            n += 1;
            t += (e + d);
        } else {

            n += 1;
            t += e;
        }
    }
    std::cout << t;
}