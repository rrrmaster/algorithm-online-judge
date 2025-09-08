#include <iostream>

int h, w, n;

void input()
{
	std::cin >> h >> w >> n;
	n -= 1;
}

void solved()
{
	int floor = n % h + 1;
	int room = n / h + 1;
	printf("%d%02d\n", floor, room);
}


int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		input();
		solved();
	}
}