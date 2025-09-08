using static System.Console;
using static System.Convert;

int n;
Point[] points;
n = ToInt32(ReadLine());
points = new Point[n];
for (int i = 0; i < n; i++)
{
    var split = ReadLine().Split();
    points[i] = new Point(ToInt32(split[0]), ToInt32(split[1]));
}
Write(Math.Abs(Enumerable.Range(1, n - 2).Select(p => ShoelaceFormula(points[0], points[p], points[p + 1])).Sum()).ToString("0.0"));
double ShoelaceFormula(Point a, Point b, Point c) => 0.5 * ((a.x * b.y + b.x * c.y + c.x * a.y) - (b.x * a.y + c.x * b.y + a.x * c.y));
public record struct Point(double x, double y);