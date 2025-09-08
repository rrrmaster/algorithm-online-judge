var s = Console.ReadLine().Split();

int n = int.Parse(s[0]), m = int.Parse(s[1]);
var a = Enumerable.Range(0, n).Select(_ => long.Parse(Console.ReadLine())).OrderBy(p => p).ToArray();

int left = 0, right = 0;
var min = long.MaxValue;
while (left < n && right < n)
{
    var diff = Math.Abs(a[right] - a[left]);
    if (diff >= m)
    {
        if (diff < min)
            min = diff;
        if (right < n)
            right += 1;
        else if (left < n)
            left += 1;
    }
    else
    {
        if (left < n)
            left += 1;
        else if (right < n)
            right += 1;
    }
}

Console.Write(min);