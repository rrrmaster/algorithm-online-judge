var n = int.Parse(Console.ReadLine());
var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

var best = 0;
var min = a[0];
for (int s = 0; s < n; s++)
{
    min = Math.Min(min, a[s]);
    best = Math.Max(best, a[s] - min);
}

Console.Write(best);