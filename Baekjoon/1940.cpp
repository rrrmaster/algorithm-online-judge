#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n;
    std::vector<int> arr(n);
    std::cin >> m;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    std::sort(arr.begin(), arr.end());


    int left = 0, right = n - 1;
    int count = 0;
    while (left < right) {

        int sum = arr[left] + arr[right];

        if (sum == m) {
            left++, right--;
            count += 1;
            continue;
        }

        if (sum > m) {
            right--;
        } else {
            left++;
        }
    }
    std::cout << count;
}