#include <iostream>
#include <vector>

#define INF 987654321

struct edge {
    int start, end, weight;
};

std::vector<long long> test(int n, std::vector<edge> &edges) {
    std::vector<long long> distance(n + 1);
    distance[1] = 0;
    for (int i = 2; i <= n; ++i) {
        distance[i] = INF;
    }
    for (int i = 0; i < n - 1; ++i) {
        for (auto e: edges) {

            if (distance[e.start] == INF) continue;
            distance[e.end] = std::min(distance[e.end], distance[e.start] + e.weight);
        }
    }
    for (auto e: edges) {
        if (distance[e.start] == INF) continue;
        if (distance[e.end] > distance[e.start] + e.weight) {
            return {};
        }
    }
    return distance;
}

int main() {

    int n, m;

    std::cin >> n >> m;
    std::vector<edge> edges(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> edges[i].start >> edges[i].end >> edges[i].weight;
    }
    auto result = test(n, edges);

    if (result.size() == 0) {
        std::cout << -1;
    } else {
        for (int i = 2; i <= n; ++i) {
            std::cout << (result[i] == INF ? -1 : result[i]) << '\n';
        }
    }
}