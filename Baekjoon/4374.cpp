#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <sstream>
#include <vector>

int main() {
    int n;
    bool flag = false;
    while (std::cin >> n) {
        std::map<std::string, int> map;

        std::string str;
        std::cin.ignore();
        while (std::getline(std::cin, str) && str != ("EndOfText")) {
            std::string a = "";
            for (auto &i: str) {
                if ('a' <= i && i <= 'z')a += i;
                else if ('A' <= i && i <= 'Z')a += (i - 'A') + 'a';
                else a += ' ';
            }
            std::stringstream stringstream(a);
            while (!stringstream.eof()) {
                std::string temp;
                stringstream >> temp;
                if (temp.empty())
                    continue;
                map[temp]++;
            }
        }
        std::vector<std::string> dict;
        for (auto &i: map) {
            if (i.second == n) {
                dict.push_back(i.first);
            }
        }

        std::sort(dict.begin(), dict.end());

        if (flag) {
            std::cout << '\n';
        }
        flag = true;
        if (!dict.empty()) {
            for (auto &i: dict) {
                std::cout << i << '\n';
            }
        } else {
            std::cout << "There is no such word.\n";
        }
    }
}