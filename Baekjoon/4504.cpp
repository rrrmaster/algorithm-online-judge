#include <iostream>


int main() {
    int n, a;
    std::cin >> n;

    while (std::cin >> a && a) {
        printf("%d is%s a multiple of %d.\n", a, (a % n == 0 ? "" : " NOT"), n);
    }
}