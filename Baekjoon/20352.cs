using System;
using static System.Console;

long a;

Input();
Print(Solution());

void Input()
{
    a = Convert.ToInt64(ReadLine());
}

double Solution()
{
    return 2 * Math.PI * Math.Sqrt(a / Math.PI);
}

void Print(double a)
{
    Write(a);
}