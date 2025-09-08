#include <iostream>
#include <climits>
#include <algorithm>

int n;
int arr[11] = {};
int max = INT_MIN;
int min = INT_MAX;

void dfs(int depth, int value, int *oper) {
    if (depth == n) {
        min = std::min(min, value);
        max = std::max(max, value);
    }
    if (oper[0] > 0) {
        oper[0]-=1;
        dfs(depth + 1, value + arr[depth ], oper);
        oper[0]+=1;
    }
    if (oper[1] > 0) {
        oper[1]-=1;
        dfs(depth + 1, value - arr[depth], oper);
        oper[1]+=1;
    }
    if (oper[2] > 0) {
        oper[2]-=1;
        dfs(depth + 1, value * arr[depth], oper);
        oper[2]+=1;
    }
    if (oper[3] > 0) {
        oper[3]-=1;
        dfs(depth + 1, value / arr[depth ], oper);
        oper[3]+=1;
    }
}

int main() {
    int oper[4] = {};
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < 4; ++i) {
        std::cin >> oper[i];
    }
    dfs(1, arr[0], oper);
    std::cout << max << '\n' << min;
}
