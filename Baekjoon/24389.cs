using static System.Console;
using static System.Convert;

var n = ToInt32(ReadLine());
var sum = Enumerable.Range(0, 32).Select(p => (((~n + 1 ^ n) >> p) & 1) == 1 ? 1 : 0).Sum();
Write(sum);
