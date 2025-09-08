#include <iostream>
#include <vector>
#include <stack>
#include <string>

std::string f(std::vector<int> &v) {
    std::string str;
    int m = 0;
    std::stack<int> s;
    for (int i: v) {
        if (m < i) {
            while (m != i) {
                str += "+\n";
                m += 1;
                s.push(m);
            }
            s.pop();
            str += "-\n";
        } else {
            while (true) {
                if (s.empty()) {
                    str = "NO";
                    return str;
                }

                int t = s.top();
                s.pop();
                if (t == i) {
                    str += "-\n";
                    break;
                }

            }
        }

    }
    return str;
}

int main() {

    int n;
    std::vector<int> v;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        v.push_back(a);
    }

    std::cout << f(v);
}
