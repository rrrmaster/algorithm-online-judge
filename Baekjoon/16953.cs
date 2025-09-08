using System;
using static System.Console;

var arr = Array.ConvertAll(ReadLine().Split(), int.Parse);
var a = arr[0];
var b = arr[1];

var queue = new Queue<(int pos, int count)>();
queue.Enqueue((a, 0));
var min = -1;
while (queue.Count > 0)
{
    var temp = queue.Dequeue();
    if (temp.pos == b)
    {
        if (min == -1)
        {
            min = temp.count;
            break;
        }
    }
    if (temp.pos * 2 <= 1000000000)
        queue.Enqueue((temp.pos * 2, temp.count + 1));
    if ((long)temp.pos * 10 + 1 <= 1000000000)
        queue.Enqueue((temp.pos * 10 + 1, temp.count + 1));
}

if (min == -1) Write(-1);
else Write(min + 1);