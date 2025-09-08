using System;
using System.Linq;
using static System.Console;
var a = Array.ConvertAll(ReadLine().Split(), long.Parse);
Write(Pow(a[0], a[1], a[2]));

long Pow(long a, long b, long c)
{
    if (b == 1)
        return a % c;

    var temp = Pow(a, b / 2, c);

    if (b % 2 == 0)
        return (temp * temp) % c;
    else
        return ((temp * temp) % c * (a % c)) % c;
}