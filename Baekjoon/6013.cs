using System;
using static System.Convert;
using static System.Console;
int n = ToInt32(ReadLine());
var cows = Enumerable.Range(0, n).Select(p => { var a = ReadLine().Split(); return new { x = ToInt32(a[0]), y = ToInt32(a[1]) }; }).ToArray();
int max = 0;
int Index1=0, Index2=0;
for (int i = 0; i < cows.Length; i++)
{
    for (int j = 0; j < cows.Length; j++)
    {
        int value = (int)Math.Pow(cows[j].x - cows[i].x, 2) + (int)Math.Pow(cows[j].y - cows[i].y, 2);
        if (value > max)
        {
            max = value;
            Index1 = i+1;
            Index2 = j+1;
        }
    } 
}
WriteLine($"{Index1} {Index2}");   