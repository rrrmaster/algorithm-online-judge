#include <iostream>
#include <stack>
#include <string>

std::string f(std::string str) {
    std::string temp = "";
    std::stack<char> s;
    int t = 0;
    for (char v: str) {
        if (v == '<') {
            while (!s.empty()) {
                temp += s.top();
                s.pop();
            }
            temp += '<';
            t++;
        } else if (v == '>') {
            temp += '>';
            t--;
        } else if (v == ' ') {
            while (!s.empty()) {
                temp += s.top();
                s.pop();
            }
            temp += ' ';

        } else {
            if (t > 0) temp += v;
            else s.push(v);
        }
    }
    while (!s.empty()) {
        temp += s.top();
        s.pop();
    }
    return temp;

}

int main() {
    std::string str;
    std::getline(std::cin, str);
    std::cout << f(str);
}
