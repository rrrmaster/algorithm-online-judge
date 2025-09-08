#include <iostream>

int solved(int cw, int ch, int sw, int sh)
{
	return (cw - sw) >= 2 && (ch - sh) >= 2;
}

int main()
{
	int cw, ch, sw, sh;
	std::cin >> cw >> ch >> sw >> sh;
	std::cout << solved(cw, ch, sw, sh);
}