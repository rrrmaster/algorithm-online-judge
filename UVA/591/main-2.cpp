#include <iostream>
#include <numeric>

int arr[51];

int main() {
    int n, t = 1;
    while (std::cin >> n && n) {
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int move = 0;
        int avg = std::accumulate(arr, arr + n, 0) / n;
        for (int i = 0; i < n; ++i) {
            move += std::abs(arr[i] - avg);
        }

        std::cout
            << "Set #" << t++ << '\n'
            << "The minimum number of moves is " << move / 2 << "." << '\n'
            << '\n';
    }
}
