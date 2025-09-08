#include <iostream>
#include <algorithm>

int n, arr[50];

int main() {
    std::cin >> n;
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    std::sort(arr, arr + n);
    std::cout << arr[0] * arr[n - 1];
}