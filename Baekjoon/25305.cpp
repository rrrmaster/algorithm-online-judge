#include <iostream>
#include <algorithm>

int arr[1001];

int main() {
    int n, k;
    std::cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    std::sort(arr, arr + n);
    std::cout << arr[n - k];
}