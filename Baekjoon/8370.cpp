#include <iostream>

int solved(int n1,int  k1,int  n2,int k2)
{
	return n1 * k1 + n2 * k2;
}

int main()
{
	int n1, k1, n2, k2;
	std::cin >> n1 >> k1 >> n2 >> k2;
	std::cout << solved(n1, k1, n2, k2);
}