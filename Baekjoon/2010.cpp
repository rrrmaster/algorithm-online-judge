#include <iostream>

int n, m, s;
int main() {
	std::cin >> n;
	while (n-- )
	{
		std::cin >> m;
		--s += m;
	}
	std::cout << ++s;
}