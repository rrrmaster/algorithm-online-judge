using System;
using System.Linq;
using static System.Console;
using static System.Convert;

var n = ToInt32(ReadLine());
var list = Enumerable.Range(0, n).Select(p=>ToInt32(ReadLine())).ToList();

WriteLine((int)Math.Round(list.Average()));
WriteLine(list.OrderBy(x => x).ToArray()[list.Count / 2]);
int max = list.GroupBy(x => x).Max(p => p.Count());
var g = list.GroupBy(x => x).Where(x => x.Count() == max).OrderBy(p=>p.Key).ToArray();
if (g.Count() > 1)
    WriteLine(g[1].Key);
else
    WriteLine(g[0].Key);
WriteLine(list.Max()-list.Min());