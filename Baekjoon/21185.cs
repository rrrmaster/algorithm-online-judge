using System;
using System.Collections.Generic;
using static System.Console;

int n;
Input();
Write(Solution());

string Solution()
{
    if (n % 2 == 1)
    {
        return "Either";
    }
    else
    {
        if ((n / 2) % 2 == 0)
        {
            return "Even";
        }
        else
        {
            return "Odd";
        }
    }
}

void Input()
{
    n = Convert.ToInt32(Console.ReadLine());
}
