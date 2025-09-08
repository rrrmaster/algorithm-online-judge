#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());
    int a = 0, b = n - 1;

    int i = 0, j = n - 1;
    while (i < j) {
        if (std::abs(v[i] + v[j]) < std::abs(v[a] + v[b])) {

            a = i;
            b = j;
        }
        if (v[i] + v[j] < 0) {
            i++;
        } else {
            j--;
        }
    }

    std::cout << v[a] << ' ' << v[b];
}