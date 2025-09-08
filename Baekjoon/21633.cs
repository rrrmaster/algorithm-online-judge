using System;
using static System.Console;

int n;

Input();
Print(Solution());

void Input()
{
    n = Convert.ToInt32(ReadLine());
}

double Solution()
{
    double v = n / 100.0 + 25;
    return Math.Clamp(v, 100, 2000);
}

void Print(double a)
{
    Write($"{a:F2}");
}