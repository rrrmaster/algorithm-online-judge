#include <iostream>

int parent[300001] = {};

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
    int n;
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        parent[i] = i;
    }
    for (int i = 0; i < n - 2; ++i) {
        int a, b;
        std::cin >> a >> b;
        merge(a, b);
    }
    for (int i = 2; i <= n; ++i) {
        if (!is_union(1, i)) {
            std::cout << 1 << ' ' << i;
            break;
        }
    }
    return 0;
}
