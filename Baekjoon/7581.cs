using System.Linq;
using static System.Convert;
using static System.Console;

while(true)
{
    var list = ReadLine().Split().Select(p=>ToInt32(p)).ToList();
    if (list.Count(p => p == 0) == 4)  break;
         if (list[0] == 0) list[0] = list[3] / (list[1] * list[2]);
    else if (list[1] == 0) list[1] = list[3] / (list[0] * list[2]);
    else if (list[2] == 0) list[2] = list[3] / (list[0] * list[1]);
    else if (list[3] == 0) list[3] = (list[0] * list[1] * list[2]);

    WriteLine($"{list[0]} {list[1]} {list[2]} {list[3]}");
}