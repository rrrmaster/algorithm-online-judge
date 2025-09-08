using System.Linq;
using static System.Console;
using static System.Convert;

var list = Enumerable.Range(0, 6).Select(p => ToInt32(ReadLine())).ToList();
Write(list.Take(4).Sum() - list.Take(4).Min(p=>p) + list.Skip(4).Max(p=>p));