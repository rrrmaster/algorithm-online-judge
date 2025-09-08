#include <iostream>

bool isluhn(long long int number)
{
	int sum = 0;
	for (int i = 0; number > 0; i++)
	{
		int temp = (number % 10) * (i % 2 == 0 ? 1 : 2);
		sum += temp % 10 + temp / 10;
		number /= 10;
	}
	return sum % 10 == 0;
}
int main()
{
	int n;
	std::cin >> n;
	while (n--)
	{
		long long int card;
		std::cin >> card;
		std::cout << (isluhn(card) ? "T" : "F") << '\n';
	}
}