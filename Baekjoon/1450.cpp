#include <iostream>
#include <vector>
#include <algorithm>

std::vector<long> calcsubarray(std::vector<long> &a, int n, int c) {
    std::vector<long> temp((1 << n));
    for (int i = 0; i < (1 << n); i++) {
        long long int s = 0;
        for (int j = 0; j < n; j++)
            if (i & (1 << j))
                s += a[j + c];
        temp[i] = s;
    }
    return temp;
}

int main() {
    int n, c;
    std::cin >> n >> c;
    std::vector<long> v(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    auto x = calcsubarray(v, n / 2, 0);
    auto y = calcsubarray(v, n - n / 2, n / 2);

    std::sort(y.begin(), y.end());

    int result = 0;
    for (int i = 0; i < x.size(); i++) {
        result += std::upper_bound(y.begin(), y.end(), (c - x[i])) - y.begin();
    }
    std::cout << result;
}