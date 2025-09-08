#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
int main() {
    int n, s;
    std::cin >> n >> s;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    int a = 0, b = 0;
    int sum = v[a];

    int len = INT_MAX;
    while (a <= b && b < n) {
        if (sum < s) {
            b++;
            sum += v[b];
        } else {
            len = std::min(len, b - a + 1);
            sum -= v[a];
            a++;
        }
    }
    if (len == INT_MAX)len = 0;
    std::cout << len;
}