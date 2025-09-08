using System.Text;
using static System.Console;

var n = int.Parse(ReadLine());
var points = Array.ConvertAll(ReadLine().Split(), int.Parse);
var sorts = points.Distinct().ToArray();
Array.Sort(sorts);
var sb = new StringBuilder();
for (int i = 0; i < n; i++)
{
    sb.Append(Array.BinarySearch(sorts, points[i]) + " ");
}
Write(sb.ToString());