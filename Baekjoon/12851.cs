using System;
using System.Linq;
using static System.Console;

var split = ReadLine().Split();
var n = int.Parse(split[0]);
var k = int.Parse(split[1]);

var visible = new bool[100001];
var queue = new Queue<(int sec, int pos)>();
var minSecond = -1;
var minCount = 0;
queue.Enqueue((0, n));

while (queue.Count > 0)
{
    var temp = queue.Dequeue();
    var sec = temp.sec;
    var pos = temp.pos;
    
    visible[pos] = true;
    if (k == pos)
    {
        if (minSecond == -1)
        {
            minSecond = sec;
            minCount++;
        }
        else if (minSecond == sec) 
        {
            minCount++;
        }
    }

    if (pos + 1 < 100001 && !visible[pos + 1])
        queue.Enqueue((sec + 1, pos + 1));

    if (pos - 1 >= 0 && !visible[pos - 1])
        queue.Enqueue((sec + 1, pos - 1));

    if (2 * pos < 100001 && !visible[pos * 2])
        queue.Enqueue((sec + 1, pos * 2));
}
WriteLine(minSecond);
WriteLine(minCount);