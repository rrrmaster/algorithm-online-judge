#include <iostream>

int x;
int dp[1000001];
int a[1000001];

int f(int n) {
    if (dp[n] > 0)return dp[n];
    if (n == 1) return 0;

    int min = f(n - 1);
    a[n] = n - 1;
    if (n % 2 == 0) {
        int temp = std::min(f(n / 2), min);
        if (temp < min) {
            min = temp;
            a[n] = n / 2;
        }
    }
    if (n % 3 == 0) {
        int temp = std::min(f(n / 3), min);
        if (temp < min) {
            min = temp;
            a[n] = n / 3;
        }
    }
    dp[n] = min + 1;
    return dp[n];
}

int main() {
    std::cin >> x;
    std::cout << f(x) << '\n';
    std::cout << x << ' ';
    for (int i = x; i != 1; i = a[i]) {
        std::cout << a[i] << ' ';
    }
}