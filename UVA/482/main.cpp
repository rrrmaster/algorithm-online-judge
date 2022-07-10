#include <iostream>
#include <sstream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    getchar();
    while (t--) {

        getchar();
        int temp;
        std::stringstream stream;

        std::vector<int> keys;
        std::vector<std::string> values;
        std::string line;

        std::getline(std::cin, line);
        stream << line;
        while (stream >> temp) {
            keys.push_back(temp - 1);
        }

        std::getline(std::cin, line);
        stream.clear();
        stream << line;
        std::string temp_string;
        values.resize(keys.size());
        int i = 0;
        while (stream >> temp_string) {
            values[keys[i++]] = temp_string;
        }
        for (int j = 0; j < values.size(); ++j) {
            std::cout << values[j] << '\n';
        }

        if (t)
            std::cout << '\n';
    }
}
