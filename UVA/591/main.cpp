#include <iostream>
#include <vector>

int main() {
    int n, t = 1;
    while (std::cin >> n && n) {
        std::vector<int> v;
        for (int i = 0; i < n; ++i) {
            int temp;
            std::cin >> temp;
            v.push_back(temp);
        }

        double sum = 0;
        for (int i: v) {
            sum += i;
        }

        double avg = sum / n;

        int move = 0;

        for (int i = 0; i < n; ++i) {
            move += std::abs(v[i] - avg);
        }
        std::cout << "Set #" << t++ << '\n';
        std::cout << "The minimum number of moves is " << move / 2 << "." <<'\n';
        std::cout << '\n';
    }
}
