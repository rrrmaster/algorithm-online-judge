using System.Linq;
using static System.Console;

var a = "aiueo";
ReadLine();
WriteLine(ReadLine().Count(p => a.Contains(p)));