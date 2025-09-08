using System;
using System.Linq;
using static System.Console;
using static System.Convert;

var z= ToInt32(ReadLine());

while (z-- > 0)
{
    var rgbs = new (int r, int g, int b)[10];
    for (int i = 0; i < 10; i++)
    {
        var split = ReadLine().Split();
        rgbs[i] = new(ToInt32(split[0]), ToInt32(split[1]), ToInt32(split[2]));
    }
    WriteLine($"{Math.Round(rgbs.Average(p => p.r), MidpointRounding.AwayFromZero)} {Math.Round(rgbs.Average(p => p.g), MidpointRounding.AwayFromZero)} {Math.Round(rgbs.Average(p => p.b), MidpointRounding.AwayFromZero)}");
}