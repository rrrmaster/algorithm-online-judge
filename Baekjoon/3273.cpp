#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n, x;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    std::cin >> x;

    std::sort(v.begin(), v.end());
    int c = 0, i = 0, j = n - 1;
    while (i < j) {
        int s = v[i] + v[j];
        if (s == x) {
            j--;
            i++;
            c++;
        } else if (s < x) {
            i++;
        } else {
            j--;
        }
    }

    std::cout << c;
}