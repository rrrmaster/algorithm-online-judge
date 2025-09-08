using System;
using static System.Console;
using static System.Convert;

var t = ToInt32(ReadLine());
while(t-- > 0)
{
    var split = ReadLine().Split();
    var c = ToInt32(split[0]);
    var n = ToInt32(split[1]);
    WriteLine((int)Math.Ceiling(c / (double)n));
}