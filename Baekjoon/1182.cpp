#include <iostream>

int n, s;
int v[20];

int dfs(int value, int depth, int check) {
    if (depth == n) {
        return value == s && check > 0;
    }

    int c = 0;
    return c + dfs(value, depth + 1, check) + dfs(value + v[depth], depth + 1, check + 1);
}

int main() {
    std::cin >> n >> s;

    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    std::cout << dfs(0, 0, 0);
}