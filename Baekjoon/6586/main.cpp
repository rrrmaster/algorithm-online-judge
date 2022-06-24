#include <iostream>
#include <vector>

int n;
bool arr[101][101];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    while (std::cin >> n && n) {
        for (int y = 0; y < n; ++y) {
            for (int x = 0; x < n; ++x) {
                std::cin >> arr[y][x];
            }
        }

        std::vector<int> x_axis, y_axis;
        for (int i = 0; i < n; ++i) {
            int y_one_count = 0, x_one_count = 0;

            for (int j = 0; j < n; ++j) {
                y_one_count += arr[i][j];
                x_one_count += arr[j][i];
            }

            if (y_one_count % 2 == 1)
                y_axis.push_back(i);

            if (x_one_count % 2 == 1)
                x_axis.push_back(i);
        }

        if (x_axis.empty() && y_axis.empty()) {
            std::cout << "OK";
        } else if (x_axis.size() == 1 && y_axis.size() == 1) {
            std::cout << "Change bit (" << (y_axis[0] + 1) << "," << (x_axis[0] + 1) << ")";
        } else {
            std::cout << "Corrupt";
        }
        std::cout << "\n";
    }
}
