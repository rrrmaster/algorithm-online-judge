using System.Text;
using static System.Console;
using static System.Convert;


int n, m;
Dictionary<string, (bool,bool)> pairs = new Dictionary<string, (bool, bool)>();

var split = ReadLine().Split();
n = ToInt32(split[0]);
m = ToInt32(split[1]);
for (int i = 0; i < n; i++)
{
    var str = ReadLine();
    if(!pairs.ContainsKey(str))
    {
        pairs.Add(str, (false,false));
    }
    var temp = pairs[str];
    temp.Item1 = true;
    pairs[str] = temp;
}
for (int i = 0; i < m; i++)
{
    var str = ReadLine();
    if (!pairs.ContainsKey(str))
    {
        pairs.Add(str, (false, false));
    }
    var temp = pairs[str];
    temp.Item2 = true;
    pairs[str] = temp;
}

var sb = new StringBuilder();
var value = pairs.Where(p => p.Value.Item2 && p.Value.Item1).OrderBy(p => p.Key);
sb.AppendLine(value.Count().ToString());
foreach (var item in value) 
{
    sb.AppendLine(item.Key);
}
Write(sb);