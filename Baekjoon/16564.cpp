#include <iostream>


int k, n, m;
long players[1000001];
long solved()
{
    long left = 0;
    long right = 1000000001;
    long level = 0;
    while (left <= right)
    {
        long temp = k;
        long mid = (left + right) / 2;
        for (int i = 0; i < n; i++)
        {
            if (players[i] < mid)
                temp -= mid - players[i];
        }
        if (temp < 0)
        {
            right = mid - 1;
        }
        else if (temp >= 0)
        {
            level = mid;
            left = mid + 1;
        }
    }
    return level;
}

int main()
{
    std::cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        std::cin >> players[i];

    }
	std::cout << solved();
}