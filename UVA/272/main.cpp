#include <iostream>

int main()
{
	char c;
	bool open = true;
	while (std::cin.get(c))
	{
		if (c == '"')
		{
			if (open)
			{
				std::cout << "``";
			}
			else
			{
				std::cout << "''";
			}
			open = !open;
		}
		else
		{
			std::cout << c;
		}
	}
}
