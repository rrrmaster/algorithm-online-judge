using System;
using static System.Console;

int n;

Input();
Write(Solution());

void Input()
{
    n = Convert.ToInt32(ReadLine());
}

int Solution()
{
    int s = 0, e = 0, sum = 0, count = 0;

    while (s <= n)
    {
        if (sum >= n)
        {
            s += 1;
            sum -= s;
        }
        else if (sum < n)
        {
            e += 1;
            sum += e;
        }

        if (sum == n)
        {
            count += 1;
        }
    }

    return count;
}