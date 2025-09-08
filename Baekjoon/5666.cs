using static System.Convert;
using static System.Console;

while(true)
{
    var str = ReadLine();
    if (str == null) break;

    var split = str.Split();
    var h= ToInt32(split[0]);
    var p= ToInt32(split[1]);
    WriteLine($"{h / (double)p:F2}");
}