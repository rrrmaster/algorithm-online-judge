using System.Linq;
using static System.Convert;
using static System.Console;

var value = Enumerable.Range(1, ToInt32(ReadLine())).Select(p => { var a = ReadLine().Split(); return (ToInt32(a[0]), ToInt32(a[1])); }).ToArray();
Write($"{value.Count(p => p.Item1 > p.Item2)} {value.Count(p => p.Item1 < p.Item2)}");