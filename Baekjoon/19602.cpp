#include <iostream>
#include <string>

int s, m, l;
std::string solved()
{
	return (s + 2 * m + l * 3 >= 10 ? "happy" : "sad");
}

int main()
{
	std::cin >> s >> m >> l;
	std::cout << solved() ;

}