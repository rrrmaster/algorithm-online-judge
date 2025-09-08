using static System.Convert;
using static System.Console;

var n = ToInt32(ReadLine());

while (n-- > 0)
{
    var str = ReadLine();
    if (str == "P=NP")
    {
        WriteLine("skipped");
        continue;
    }
    var split = str.Split('+');
    WriteLine(ToInt32(split[0]) + ToInt32(split[1]));
}