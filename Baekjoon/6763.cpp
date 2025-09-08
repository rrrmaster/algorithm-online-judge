#include <iostream>
#include <string>
std::string solved(int speed, int limit)
{
	if (speed <= limit)return "Congratulations, you are within the speed limit!";
	else
	{
		int cost;
		int value = speed - limit;
		if (value <= 20)
			cost = 100;
		else if (value <= 30)
			cost = 270;
		else
			cost = 500;

		return "You are speeding and your fine is $" + std::to_string(cost) + ".";
	}
}


int main()
{
	int speed, limit;
	std::cin >> limit;
	std::cin >> speed;
	std::cout << solved(speed, limit);
}