#include <iostream>
#include <queue>

int visible[1440];

int main() {
    int sh, sm, eh, em;
    scanf("%d:%d", &sh, &sm);
    scanf("%d:%d", &eh, &em);
    std::queue<int> q;
    if (sh * 60 + sm != eh * 60 + em) {
        q.push(sh * 60 + sm);
        visible[sh * 60 + sm] = 0;
    }
    int move[2] = {1, 60};
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        for (int i: move) {
            int nt = (t + i) % 1440;
            if (visible[nt] == 0) {
                q.push(nt);
                visible[nt] = visible[t] + 1;
            }
        }
    }
    std::cout << visible[eh * 60 + em];
}
