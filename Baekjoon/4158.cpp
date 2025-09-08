#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    while (std::cin >> n >> m && n && m) {
        std::vector<int> vn(n), vm(m);

        for (int i = 0; i < n; ++i) {
            std::cin >> vn[i];
        }
        for (int i = 0; i < m; ++i) {
            std::cin >> vm[i];
        }

        int c = 0;
        int pn = 0, pm = 0;
        while (pn < n && pm < m) {
            if (vn[pn] == vm[pm]) {
                pn++;
                pm++;
                c++;
            } else if (vn[pn] > vm[pm]) {
                pm++;
            } else {
                pn++;
            }
        }
        std::cout << c << '\n';
    }
}