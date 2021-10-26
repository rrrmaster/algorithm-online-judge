#include <iostream>
#include <cmath>

int main()
{
	int d, w, h;
	std::cin >> d >> w >> h;
	double r = std::sqrt(w * w + h * h);
	std::cout << (int)(w * d / r) << ' ' << (int)(h * d / r);
}
