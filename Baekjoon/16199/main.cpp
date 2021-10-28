#include <iostream>

int by, bm, bd;
int y, m, d;

void solved()
{
	 int age0 = (y - by - 1) + ((m > bm || (m == bm && d >= bd)) ? 1 : 0);
	 int age1 = (y - by + 1);

	 int age2 = (y - by );
	std::cout << age0 << '\n';
	std::cout << age1 << '\n';
	std::cout << age2 << '\n';
}

int main()
{
	std::cin >> by >> bm >> bd ;
	std::cin >> y >> m >> d;
	solved();

}
