#include <iostream>

int solved(int sh, int sm, int ss, int eh, int em, int es)
{
	int start = sh * 3600 + sm * 60 + ss;
	int end = eh * 3600 + em * 60 + es;
	return end - start;
}

int main()
{
	for (int i = 0; i < 3; i++)
	{

		int sh, sm, ss, eh, em, es;
		std::cin >> sh >> sm >> ss >> eh >> em >> es;
		int time = solved(sh, sm, ss, eh, em, es);
		std::cout << (time / 3600) << ' ' << (time / 60 % 60) << ' ' << (time % 60) << '\n';
	}
}