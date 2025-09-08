#include <iostream>

int parent[1000001] = {};

int find(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void merge(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y)
        return;
    parent[y] = x;
}

bool is_union(int x, int y) {
    return find(x) == find(y);
}


int main() {
    int n, m;
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::cin >> n >> m;
    for (int i = 0; i <= n; ++i) {
        parent[i] = i;
    }
    for (int i = 0; i < m; ++i) {
        int c, a, b;
        std::cin >> c >> a >> b;

        if (c == 0) {
            merge(a, b);
        } else {
            if (is_union(a, b)) {
                std::cout << "YES\n";
            } else {
                std::cout << "NO\n";
            }

        }
    }
    return 0;
}
