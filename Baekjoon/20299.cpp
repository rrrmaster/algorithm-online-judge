#include <iostream>
#include <vector>

struct rating {
    int a, b, c;
};

std::vector<rating> solved(std::vector<rating> &arr, int k, int l) {
    std::vector<rating> result;
    for (auto temp: arr) {
        if (temp.a + temp.b + temp.c >= k && temp.a >= l && temp.b >= l && temp.c >= l) {
            result.push_back(temp);
        }
    }
    return result;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, k, l;
    std::cin >> n >> k >> l;

    std::vector<rating> arr(n);
    for (int i = 0; i < n; ++i) {
        rating temp{};
        std::cin >> temp.a >> temp.b >> temp.c;
        arr[i] = temp;
    }

    auto result = solved(arr, k, l);
    int c = result.size();
    std::cout << result.size() << '\n';
    for (int i = 0; i < c; ++i) {
        std::cout << result[i].a << ' ' << result[i].b << ' ' << result[i].c << ' ';
    }
}
