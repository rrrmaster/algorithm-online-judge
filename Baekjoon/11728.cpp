#include <iostream>
#include <vector>

int main() {
    int n, m;

    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    std::cin >> n >> m;

    std::vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }

    std::vector<int> c;
    int ap = 0, bp = 0;
    while (ap < n && bp < m) {
        if (a[ap] < b[bp]) {
            c.push_back(a[ap]);
            ap += 1;
        } else {
            c.push_back(b[bp]);
            bp += 1;
        }
    }

    while (ap < n) {
        c.push_back(a[ap]);
        ap += 1;
    }

    while (bp < m) {
        c.push_back(b[bp]);
        bp += 1;
    }
    for (int i = 0; i < n + m; ++i) {
        std::cout << c[i] << ' ';
    }
}