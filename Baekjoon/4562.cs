using static System.Convert;
using static System.Console;

var n = ToInt32(ReadLine());
while (n-- > 0)
{
    var split = ReadLine().Split().Select(p => ToInt32(p)).ToList();
    var x = split[0];
    var y = split[1];
    WriteLine((x >= y) ? "MMM BRAINS" : "NO BRAINS");
}