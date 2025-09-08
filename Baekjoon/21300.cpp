#include <iostream>
int main()
{
	int bottle = 0;
	for (int i = 0; i < 6; i++)
	{
		int n;
		std::cin >> n;
		bottle += n;
	}
	std::cout << bottle * 5;
}