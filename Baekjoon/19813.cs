using static System.Console;
using static System.Convert;

var n = ToInt32(ReadLine());

while (n-- > 0)
{
    int day, month, year;
    var str = ReadLine();
    if (str.Contains('.'))
    {
        var split = str.Split('.');
        day = ToInt32(split[0]);
        month = ToInt32(split[1]);
        year = ToInt32(split[2]);
    }
    else
    {
        var split = str.Split('/');
        month = ToInt32(split[0]);
        day = ToInt32(split[1]);
        year = ToInt32(split[2]);
    }

    WriteLine($"{day:D2}.{month:D2}.{year:D4} {month:D2}/{day:D2}/{year:D4}");
}