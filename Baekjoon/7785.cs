using System.Text;
using static System.Console;
using static System.Convert;

var n = ToInt32(ReadLine());
var v = new SortedList<string, bool>(n);
var sb = new StringBuilder();

for (int i = 0; i < n; i++)
{
    var split = ReadLine().Split();
    v[split[0]] = split[1] == "enter" ? true : false;
}
foreach (var item in v.Reverse())
{
    if (item.Value) sb.AppendLine(item.Key);
}
Write(sb);
