#include <iostream>

int main() {
    char n;
    std::cin >> n;
    std::cout << (n == 'N' || n == 'n'? "Naver D2" : "Naver Whale");
}