using System.Collections.Generic;
using static System.Console;

var dirs = new Vector2[]
{
        new Vector2(+1, +2),
        new Vector2(-1, +2),

        new Vector2(+2, +1),
        new Vector2(-2, +1),

        new Vector2(+2, -1),
        new Vector2(-2, -1),

        new Vector2(+1, -2),
        new Vector2(-1, -2),
};


var count = 0;
var str = ReadLine();
var start = new Vector2(str[0] - 'a', str[1] - '1');
str = ReadLine();
var end = new Vector2(str[0] - 'a', str[1] - '1');

var visible = new (bool check, int count)[8, 8];
var queue = new Queue<Vector2>();

visible[start.x, start.y] = (true, 0);
queue.Enqueue(start);

while (queue.Count > 0)
{
    var point = queue.Dequeue();
    if (point == end)
    {
        count = visible[end.x, end.y].count;
        break;
    }
    foreach (var item in dirs)
    {
        var temp = new Vector2(point.x + item.x, point.y + item.y);
        if (0 <= temp.x && temp.x <= 7 && 0 <= temp.y && temp.y <= 7 && !visible[temp.x, temp.y].check)
        {
            visible[temp.x, temp.y] = new(true, visible[point.x, point.y].count + 1);
            queue.Enqueue(temp);
        }
    }
}

Write(count);

public record struct Vector2(int x, int y);