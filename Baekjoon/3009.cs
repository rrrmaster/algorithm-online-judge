using static System.Convert;
using static System.Console;

var split = ReadLine().Split();
var a = new Vector2(ToInt32(split[0]), ToInt32(split[1]));
split = ReadLine().Split();
var b = new Vector2(ToInt32(split[0]), ToInt32(split[1]));
split = ReadLine().Split();
var c = new Vector2(ToInt32(split[0]), ToInt32(split[1]));
Vector2 d = new Vector2();

if (a.x == b.x) d.x = c.x;
else if (b.x == c.x) d.x = a.x;
else d.x = b.x;

if (a.y == b.y) d.y = c.y;
else if (b.y == c.y) d.y = a.y;
else d.y = b.y;
Write($"{d.x} {d.y}");
public record struct Vector2(int x,int y);