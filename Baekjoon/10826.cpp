#include <iostream>
#include <string>
#include<algorithm>

std::string dp[10001] = {"0", "1", "1"};

std::string string_number_add(std::string a, std::string b) {
    if (a.size() < b.size()) {
        std::string temp;
        temp = a;
        a = b;
        b = temp;
    }
    int cur = 0;
    std::string c = "";
    for (int i = 0; i < b.size(); i++) {
        int value = (a[a.size() - 1 - i] + b[b.size() - 1 - i] - (2 * '0')) + cur;

        c += (value % 10) + '0';
        cur = value / 10;
    }
    for (int i = b.size(); i < a.size(); i++) {
        int value = a[a.size() - 1 - i] - '0' + cur;

        c += (value % 10 + '0');
        cur = value / 10;
    }
    if (cur != 0)
        c += cur + '0';
    std::reverse(c.begin(), c.end());
    return c;
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 3; i <= n; ++i) {
        dp[i] = string_number_add(dp[i - 2], dp[i - 1]);
    }
    std::cout << dp[n];
}