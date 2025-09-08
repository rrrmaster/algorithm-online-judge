using System;
using static System.Console;

int a, b, c, m;

Input();
Solution();

void Input()
{
    var split = ReadLine().Split();
    a = Convert.ToInt32(split[0]);
    b = Convert.ToInt32(split[1]);
    c = Convert.ToInt32(split[2]);
    m = Convert.ToInt32(split[3]);
}

void Solution()
{
    int s = 0, p = 0;
    for (int i = 0; i < 24; i++)
    {
        if (s + a <= m)
        {
            s += a;
            p += b;
        }
        else
        {
            s = Math.Max(s - c, 0);
        }
    }
    Write(p);
}