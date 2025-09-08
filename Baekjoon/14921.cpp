#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int left = 0, right = n - 1;

    int min = arr[left] + arr[right];
    while (left < right) {
        int temp = arr[left] + arr[right];
        if (temp > 0) {
            right -= 1;
        } else {
            left += 1;
        }

        min = (abs(min) > abs(temp)) ? temp : min;
    }
    std::cout << min;
}