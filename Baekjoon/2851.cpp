#include <iostream>

int main() {
    int arr[10] = {};
    for (int i = 0; i < 10; ++i)
        std::cin >> arr[i];

    int best = 0;
    for (int i = 0; i < 10; ++i) {
        int sum = 0;
        for (int j = 0; j <= i; ++j) {

            sum += arr[j];
            if (std::abs(100 - sum) <= std::abs(100 - best) && best < sum) {
                best = sum;
            }
        }
    }
    std::cout << best;
}