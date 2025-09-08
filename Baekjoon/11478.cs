using static System.Console;

var pairs = new Dictionary<string,int>();
var str = ReadLine();
for (int j = 1; j <= str.Length; j++)
{
    for (int i = 0; i <= str.Length - j; i++)
    {
        var a = str.Substring(i, j);
        if(!pairs.ContainsKey(a))
            pairs.Add(a, 1);
        else
            pairs[a]++;
    }
}
Write(pairs.Count);