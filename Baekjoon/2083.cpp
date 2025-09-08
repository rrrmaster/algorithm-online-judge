#include <iostream>
#include <string>

int main() {
    std::string name;
    int age, weight;

    while (std::cin >> name >> age >> weight && name != "#" && age && weight) {
        std::cout << name << ' ' << (age > 17 || weight >= 80 ? "Senior" : "Junior") << '\n';
    }
}