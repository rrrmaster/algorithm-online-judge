using static System.Console;
using static System.Convert;

var split = ReadLine().Split();
var n = ToInt32(split[0]);
var m = ToInt32(split[1]);
var pairs = new Dictionary<string, string>();
for (int i = 0; i < n; i++)
{
    split = ReadLine().Split();
    pairs.Add(split[0], split[1]);
}

for (int i = 0; i < m; i++)
{
    var str = ReadLine();
    WriteLine(pairs[str]);
}