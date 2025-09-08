#include <iostream>
#include <vector>

int main() {
    int n;
    bool check[4000001] = {};
    std::vector<int> v;

    std::cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if (check[i]) continue;

        for (int j = 2 * i; j <= n; j += i)
            check[j] = true;
    }

    for (int i = 2; i < n + 1; i++) {
        if (!check[i]) {
            v.push_back(i);
        }
    }

    int a = 0, b = 0;
    int sum = 0, c = 0;
    while (true) {
        if (sum >= n) {
            sum -= v[a];
            a++;
        } else {
            if (b == v.size())
                break;

            sum += v[b];
            b++;
        }

        if (sum == n)c++;
    }
    std::cout << c;
}