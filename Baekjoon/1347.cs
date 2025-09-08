using System;
using System.Collections.Generic;
using static System.Console;
using static System.Convert;

var n = ToInt32(ReadLine());
var input = ReadLine();

var dirs = new Vector2[] { new Vector2(0, -1), new Vector2(+1, 0), new Vector2(0, +1), new Vector2(-1, 0) };
var dir = 0;
var max = new Vector2(0, 0);
var min = new Vector2(0, 0);
var pos = new Vector2(0, 0);
var list = new List<Vector2>() { pos };

for (int i = 0; i < n; i++)
{
    switch (input[i])
    {
        case 'F':
            pos = new Vector2(pos.x + dirs[dir].x, pos.y + dirs[dir].y);

            max = new Vector2(Math.Max(max.x, pos.x), Math.Max(max.y, pos.y));
            min = new Vector2(Math.Min(min.x, pos.x), Math.Min(min.y, pos.y));
            list.Add(pos);
            break;
        case 'R':
            dir = (4 + ((dir - 1) % 4)) % 4;
            break;
        case 'L':
            dir = (dir + 1) % 4;
            break;
    }
}

for (int y = max.y; y >= min.y; y--)
{
    for (int x = min.x; x <= max.x; x++)
    {
        if(list.Contains(new Vector2(x,y)))
        {
            Write('.');
        }
        else
        {
            Write('#');
        }
    }
    Write('\n');
}
public record struct Vector2(int x,int y);