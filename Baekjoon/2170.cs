var n = int.Parse(Console.ReadLine());
var lines = Enumerable.Range(0, n)
    .Select(_ => Console.ReadLine().Split(' '))
    .Select(p => new Line(int.Parse(p[0]), int.Parse(p[1])))
    .OrderBy(p => p.s)
    .ToArray();


var total = 0;
var tempLine = new Line(int.MinValue, int.MinValue);
foreach (var line in lines)
{
    if (line.s > tempLine.e)
    {
        total += tempLine.Distance;
        tempLine = line;
        continue;
    }

    tempLine.e = Math.Max(tempLine.e, line.e);
}

total += tempLine.Distance;

Console.Write(total);

public record struct Line(int s, int e)
{
    public int s = s, e = e;

    public int Distance => e - s;
}