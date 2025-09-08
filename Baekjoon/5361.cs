using System.Linq;
using static System.Console;

var m = new double[] { 350.34, 230.90, 190.55, 125.30, 180.90 };
var t = int.Parse(ReadLine());    
while (t-- > 0)
{
    var split = ReadLine().Split();
    WriteLine($"${split.Select((v, i) => (int.Parse(v), i)).Sum(p => m[p.i] * p.Item1):F2}");
}