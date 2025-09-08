using System.Linq;
using static System.Console;
using static System.Convert;

var t = ToInt32(ReadLine());

while (t-- > 0) 
{
    var years = ReadLine().Split(',').Select(p => ToInt32(p.Trim())).Where(p => (p % 4 == 0 && p % 100 != 0) || p % 400 == 0);
    WriteLine(string.Join(' ', years));
}