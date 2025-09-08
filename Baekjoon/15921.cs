using System.Linq;
using static System.Console;
using static System.Convert;

var n = ToInt32(ReadLine());
var sum = (n != 0) ? ReadLine().Split().Select(p => ToInt32(p)).Sum() : 0;
Write(sum == 0 ? "divide by zero" : "1.00");