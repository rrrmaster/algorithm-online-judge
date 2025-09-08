using static System.Console;
using static System.Convert;

var split = ReadLine().Split();
var n = ToInt32(split[0]);
var m = ToInt32(split[1]);
var pairs = new Dictionary<string, int>();
for (int i = 0; i < n; i++)
{
    var str = ReadLine();
    pairs.Add(str, 0);
}

for (int i = 0; i < m; i++)
{
    var str = ReadLine();
    if(pairs.ContainsKey(str))
    {
        pairs[str]++;
    }
}
Write(pairs.Sum(p=>p.Value));
