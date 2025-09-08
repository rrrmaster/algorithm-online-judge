#include <iostream>
#include <cmath>

int main()
{
    int w, h;
    std::cin >> w >> h;
    std::cout << (int)ceil((w * h) / (5.0 * 4840));
}