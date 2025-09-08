using static System.Console;
using static System.Convert;

int n = ToInt32(ReadLine());
var pairs = new Dictionary<string, int>();

for (int i = 0; i < n; i++)
{
    var str = ReadLine();
    if (!pairs.ContainsKey(str))
        pairs.Add(str, 0);
    pairs[str]++;
}
Write(pairs.OrderByDescending(p=>p.Value).ThenBy(p=>p.Key).First().Key);