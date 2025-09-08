#include <iostream>
#include <vector>

#define INF 987654321

struct edge {
    int start, end, weight;
};

bool isT(int n, std::vector<edge> &edges) {
    std::vector<long long> distance(n + 1);
    distance[1] = 0;
    for (int i = 2; i <= n; ++i) {
        distance[i] = INF;
    }
    for (int i = 0; i < n - 1; ++i) {
        for (auto e: edges) {
            distance[e.end] = std::min(distance[e.start] + e.weight, distance[e.end]);
        }
    }
    for (auto e: edges) {
        if (distance[e.end] > distance[e.start] + e.weight)
            return true;
    }
    return false;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, m, w;
        std::vector<edge> edges;
        std::cin >> n >> m >> w;
        for (int i = 0; i < m; ++i) {
            int start, end, weight;
            std::cin >> start >> end >> weight;
            edges.push_back({start, end, weight});
            edges.push_back({end, start, weight});
        }
        for (int i = 0; i < w; ++i) {
            int start, end, weight;
            std::cin >> start >> end >> weight;
            edges.push_back({start, end, -weight});
        }

        bool is_past = isT(n, edges);
        std::cout << (is_past ? "YES" : "NO") << '\n';
    }
}