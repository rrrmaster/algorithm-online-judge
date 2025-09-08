#include <iostream>
#include <vector>


int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(n), p(n - k + 1);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    
    for (int i = 0; i < k; ++i) {
        p[0] += v[i];
    }
    
    int max = p[0];
    for (int i = 1; i < n - k + 1; ++i) {
        p[i] = p[i - 1] - v[i - 1] + v[k + i - 1];
        max = std::max(p[i], max);
    }
    std::cout << max;
}