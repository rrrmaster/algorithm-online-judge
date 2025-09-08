#include <iostream>

int n, m;
long long arr[1000001];
long long cnt[1001];
int main() {
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        std::cin>>arr[i];
        if(i>0)
            arr[i] += arr[i-1];
        arr[i] %= m;
        cnt[arr[i]]++;
    }

    long long sum = cnt[0];
    for (int i = 0; i < m; ++i) {
        sum += cnt[i] * (cnt[i] - 1) / 2;
    }
    std::cout << sum;
}
