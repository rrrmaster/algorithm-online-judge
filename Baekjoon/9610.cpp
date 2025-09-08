#include <iostream>

int main()
{
	int t;
	std::cin >> t;

	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
	while (t--)
	{
		int x, y;
		std::cin >> x >> y;
		if (x == 0 || y == 0)axis++;
		else if (x > 0)
		{
			if (y > 0)q1++;
			else q4++;
		}
		else
		{
			if (y > 0)q2++;
			else q3++;
		}
	}

	std::cout << "Q1: " << q1 << std::endl;
	std::cout << "Q2: " << q2 << std::endl;
	std::cout << "Q3: " << q3 << std::endl;
	std::cout << "Q4: " << q4 << std::endl;
	std::cout << "AXIS: " << axis << std::endl;
}