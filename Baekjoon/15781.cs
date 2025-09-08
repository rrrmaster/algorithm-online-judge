using System.Linq;
using static System.Console;
ReadLine();
Write(ReadLine().Split().Max(p => int.Parse(p)) + ReadLine().Split().Max(p => int.Parse(p)));