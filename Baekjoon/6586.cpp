#include <iostream>
#include <vector>

int n;
bool arr[101][101];

int main() {
    while (std::cin >> n && n) {
        std::vector<int> x_axis, y_axis;
        for (int y = 0; y < n; ++y) {
            for (int x = 0; x < n; ++x) {
                std::cin >> arr[y][x];
            }
        }
        for (int y = 0; y < n; ++y) {
            int one_count = 0;
            for (int x = 0; x < n; ++x) {
                if (arr[y][x]) {
                    one_count++;
                }
            }
            if (one_count % 2 == 1) {
                y_axis.push_back(y);
            }
        }

        for (int x = 0; x < n; ++x) {
            int one_count = 0;
            for (int y = 0; y < n; ++y) {
                if (arr[y][x]) {
                    one_count++;
                }
            }
            if (one_count % 2 == 1) {
                x_axis.push_back(x);
            }
        }

        if (x_axis.empty() && y_axis.empty()) {
            std::cout << "OK" << "\n";
        } else if (x_axis.size() == 1 && y_axis.size() == 1) {
            std::cout << "Change bit (" << (y_axis[0] + 1) << "," << (x_axis[0] + 1) << ")" << "\n";
        } else {
            std::cout << "Corrupt" << "\n";
        }
    }


}