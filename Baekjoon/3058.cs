using System.Linq;
using static System.Console;

int t = int.Parse(ReadLine());
while(t-->0)
{
    var a =ReadLine().Split().Select(p => int.Parse(p)).Where(p => p % 2 == 0);
    WriteLine($"{a.Sum()} {a.Min()}");
}