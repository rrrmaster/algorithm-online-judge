using System.Linq;
using static System.Convert;
using static System.Console;
var n = ToInt32(ReadLine());
var h = ReadLine().Split().Select(p => ToInt32(p)).ToArray();
var w = ReadLine().Split().Select(p => ToInt32(p)).ToArray();
Write(Enumerable.Range(0, n).Select(p => w[p]* Math.Min(h[p], h[p + 1]) + (w[p] * Math.Abs(h[p] - h[p + 1]) * 0.5)).Sum());