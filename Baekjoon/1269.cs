using static System.Console;
using static System.Convert;

var split = ReadLine().Split();
var pairs = new Dictionary<int, (bool,bool)>();
var a = ToInt32(split[0]);
var b = ToInt32(split[1]);

split =ReadLine().Split();
for (int i = 0; i < a; i++)
{
    var str = ToInt32(split[i]);
    if (!pairs.ContainsKey(str))
    {
        pairs.Add(str, (true, false));
    }
}
split = ReadLine().Split();
for (int i = 0; i < b; i++)
{
    var str = ToInt32(split[i]);
    if (!pairs.ContainsKey(str))
    {
        pairs.Add(str, (true, false));
    }
    else
    {
        var temp = pairs[str];
        temp.Item2 = true;
        pairs[str] = temp;
    }
}

Write(pairs.Where(p => p.Value.Item1 && !p.Value.Item2).Count() + pairs.Where(p => !p.Value.Item1 && p.Value.Item2).Count());