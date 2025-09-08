#include <iostream>
#include <string>
#include <stack>

int main() {
    std::string str;
    std::string open("[({");
    std::string close("])}");
    while (std::getline(std::cin, str), str != "#") {
        std::stack<char> stack;
        bool flag = true;
        for (auto &s: str) {
            auto pos = open.rfind(s);
            if (pos != std::string::npos) {
                stack.push(s);
            }

            pos = close.rfind(s);
            if (pos != std::string::npos) {
                char t = stack.top();
                stack.pop();
                if (open.rfind(t) != pos) {
                    flag = false;
                    break;
                }
            }
        }
        if (!stack.empty()) {
            flag = false;
        }
        std::cout << (flag ? "Legal" : "Illegal") << '\n';
    }

}