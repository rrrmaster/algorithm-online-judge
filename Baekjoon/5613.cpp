#include <iostream>

long long solved()
{
	char o;
	long long s = 0;
	long long n;
	std::cin >> n;
	s = n;
	while (std::cin >> o && o != '=')
	{
		std::cin >> n;
		switch (o)
		{
		case '+':
			s += n;
			break;
		case '-':
			s -= n;
			break;
		case '*':
			s *= n;
			break;
		case '/':
			s /= n;
			break;
		}
	}
	return s;
}

int main()
{
	std::cin.tie(0);
	std::cout << solved();
}