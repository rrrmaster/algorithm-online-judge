#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;


    std::vector<int> tris({1});
    for (int i = 2; tris[tris.size() - 1] <= 1000; ++i) {
        tris.push_back(tris[i - 2] + i);
    }
    while (t--) {
        int k;
        std::cin >> k;

        bool flag = false;
        int n = tris.size();
        for (int a = 0; a < n; ++a) {
            for (int b = 0; b < n; ++b) {
                for (int c = 0; c < n; ++c) {
                    if (tris[a] + tris[b] + tris[c] == k) {
                        flag = true;
                    }
                }
            }
        }
        std::cout << flag << '\n';
    }
}