#include <iostream>
#include <string>

int dp[26][200001];

int main() {
    std::string str;
    std::cin >> str;
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int n = str.size();
    for (int i = 0; i < 26; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            if (str[j] == ('a' + i)) sum += 1;
            dp[i][j] = sum;
        }
    }

    int q;
    std::cin >> q;
    while (q--) {
        char a;
        int l, r;
        std::cin >> a >> l >> r;
        std::cout << (dp[a - 'a'][r] - dp[a - 'a'][l-1]) << '\n';
    }
}