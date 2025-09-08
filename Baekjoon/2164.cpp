#include <iostream>
#include <queue>

int main()
{
	int n;
	std::queue<int> q;
	std::cin >> n;
	for (int i = 1; i <= n; i++) q.push(i);

	while (q.size() != 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}
	std::cout << q.front();
}