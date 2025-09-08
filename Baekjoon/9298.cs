using System;
using static System.Convert;
using static System.Console;
int t = ToInt32(ReadLine());
for (int i = 1; i <= t; i++)
{
    var n = ToInt32(ReadLine());
    var points = Enumerable.Range(0, n).Select(p => { var a = ReadLine().Split(); return new { x = ToSingle(a[0]), y = ToSingle(a[1]) }; }).ToArray();
    var min = new { x = points.Min(p => p.x), y = points.Min(p => p.y) };
    var max = new { x = points.Max(p => p.x), y = points.Max(p => p.y) };

    WriteLine($"Case {i}: Area {(max.x - min.x) * (max.y - min.y)}, Perimeter {(max.x - min.x + max.y - min.y) * 2}");
}