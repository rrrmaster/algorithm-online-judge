using System.Linq;
using static System.Console;

Enumerable.Range(1, int.Parse(ReadLine())).Select(p => ReadLine().ToLower()).ToList().ForEach(p => WriteLine(p));