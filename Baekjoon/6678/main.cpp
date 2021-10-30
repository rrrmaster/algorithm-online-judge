#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int dirToNumber(char d)
{
	if ('S' == d)
		return 0;
	if ('W' == d)
		return 1;

	if ('N' == d)
		return 2;

	if ('E' == d)
		return 3;
	return -1;
}
int shapeToNumber(char d)
{
	if ('H' == d)
		return 3;
	if ('S' == d)
		return 2;
	if ('D' == d)
		return 1;
	if ('C' == d)
		return 0;
	return -1;
}
int cardNumberToNumber(char d)
{
	if ('2' <= d && d <= '9')
		return d - '0';
	if (d == 'T')
		return 10;
	if (d == 'J')
		return 11;
	if (d == 'Q')
		return 12;
	if (d == 'K')
		return 13;
	if (d == 'A')
		return 14;



	return -1;
}
bool compare(std::string a, std::string b)
{
	if (shapeToNumber(a[0]) == shapeToNumber(b[0]))
		return cardNumberToNumber(a[1]) < cardNumberToNumber(b[1]);

	return shapeToNumber(a[0]) < shapeToNumber(b[0]);
}
int main()
{
	char n;
	std::string players[] = { "South","West", "North","East" };
	while (std::cin >> n && n != '#')
	{
		std::vector<std::string> deck[4] = {};
		int m = dirToNumber(n);
		for (int i = 0; i < 52; i++)
		{
			char a, b;
			std::cin >> a;
			std::cin >> b;
			m = (m + 1) % 4;
			std::string temp;
			temp.resize(2);
			temp[0] =a;
			temp[1] =b;
			deck[m].push_back(temp);
		}
		for (int i = 0; i < 4; i++)
			std::sort(deck[i].begin(), deck[i].end(), compare);
		for (int i = 0; i < 4; i++)
		{
			printf("%s player:\n", players[i].c_str());
			for (int j = 0; j < 13; j++)
			{
				printf("+---");
			}
			printf("+\n");

			for (int j = 0; j < 13; j++)
			{
				printf("|%c %c", deck[i][j][1], deck[i][j][1]);
			}
			printf("|\n");

			for (int j = 0; j < 13; j++)
			{
				printf("| %c ", deck[i][j][0]);
			}
			printf("|\n");

			for (int j = 0; j < 13; j++)
			{
				printf("|%c %c", deck[i][j][1], deck[i][j][1]);
			}
			printf("|\n");
			for (int j = 0; j < 13; j++)
			{
				printf("+---");
			}
			printf("+\n");
		}

		printf("\n");
	}
}
