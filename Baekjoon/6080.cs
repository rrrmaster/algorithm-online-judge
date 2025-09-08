using System.Collections.Generic;
using static System.Console;
using static System.Convert;

int r, c;
int[,] grid;
Point[] dirs = new Point[] {
    new Point(-1, 1),
    new Point( 0, 1),
    new Point( 1, 1),

    new Point(-1, 0),
    new Point( 1, 0),

    new Point(-1,-1),
    new Point( 0,-1),
    new Point( 1,-1),

};

Input();
Output(Solution());
void Input()
{
    var split = ReadLine().Split();

    r = ToInt32(split[0]);

    c = ToInt32(split[1]);
    grid = new int[r, c];

    for (int y = 0; y < r; y++)
    {
        split = ReadLine().Split();
        for (int x = 0; x < c; x++)
        {
            grid[y, x] = ToInt32(split[x]);
        }
    }
}

int Solution()
{
    int count = 0;
    bool[,] visible = new bool[r, c];
    for (int y = 0; y < r; y++)
    {
        for (int x = 0; x < c; x++)
        {
            if (grid[y, x] > 0 && !visible[y, x])
            {
                count++;
                visible[y, x] = true;

                Queue<Point> q = new Queue<Point>();
                q.Enqueue(new Point(x, y));
                while (q.Count > 0)
                {
                    var point = q.Dequeue();
                    foreach (var dir in dirs)
                    {
                        var temp = new Point(point.x + dir.x, point.y + dir.y);

                        if (0 <= temp.x && temp.x < c && 0 <= temp.y && temp.y < r && grid[temp.y, temp.x] > 0 && !visible[temp.y, temp.x]) 
                        {
                            visible[temp.y, temp.x] = true;
                            q.Enqueue(temp);
                        }
                    }
                }

            }
        }
    }
    return count;
}

void Output(int count)
{
    Write(count);
}
public record struct Point(int x, int y);