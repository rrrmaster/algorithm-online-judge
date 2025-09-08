#include <iostream>
#include <queue>

int visible[1000000] = {};


int main() {
    int a, k;
    std::cin >> a >> k;

    std::queue<int> q;
    q.push(a);
    visible[a] = true;


    while (!q.empty() && visible[k] == 0) {
        int c = q.front();
        q.pop();
        if (c + 1 <= k && !visible[c + 1]) {
            visible[c + 1] = visible[c] + 1;
            q.push(c + 1);
        }


        if (c * 2 <= k && !visible[c * 2]) {
            visible[c * 2] = visible[c] + 1;
            q.push(c * 2);
        }
    }
    std::cout << visible[k] - 1;
}
