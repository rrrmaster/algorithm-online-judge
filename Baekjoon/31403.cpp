#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (a + b - c) << "\n"
              << (a*(int)pow(10,(int)log10(b)+1)+b-c);
}