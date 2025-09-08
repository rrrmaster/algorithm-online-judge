#include <iostream>

int s, k, h;
void solved()
{
	std::cout << ((s + k + h >= 100) ? "OK" : (s > k) ? ((k > h) ? "Hanyang" : "Korea") : ((s > h) ? "Hanyang" : "Soongsil"));
}

int main()
{
	std::cin >> s >> k >> h;
	solved();

}