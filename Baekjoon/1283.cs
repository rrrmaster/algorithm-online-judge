using System.Text;
using static System.Console;

var n = int.Parse(ReadLine());
var list = new List<char>();
var sb = new StringBuilder();
var strs = Enumerable.Range(0, n).Select(_ => ReadLine()).ToArray();
for (int i = 0; i < strs.Length; i++)
{
    var str = strs[i];
    var index = HotKey(str);
    if (index != -1)
    {
        var len = str.Length;
        for (int j = 0; j < len; j++)
        {
            if (j == index) sb.Append("[");
            sb.Append(str[j]);
            if (j == index) sb.Append("]");
        }
    }
    else
    {
        sb.Append(str);
    }
    sb.Append('\n');
}
Write(sb.ToString());

int HotKey(string str)
{
    var split = str.Split();
    var padding = 0;
    var upper = str.ToUpper();
    var count = split.Length;
    for (int i = 0; i < count; i++)
    {
        if (!list.Contains(upper[padding]))
        {
            list.Add(upper[padding]);
            return padding;
        }
        padding += split[i].Length + 1;
    }
    padding = 0;
    for (int i = 0; i < count; i++)
    {
        var p = split[i].Length;
        for (int j = 1; j < p; j++)
        {
            if (!list.Contains(upper[padding + j]))
            {
                list.Add(upper[padding+j]);
                return padding + j;
            }
        }
        padding += p + 1;
    }
    return -1;
}