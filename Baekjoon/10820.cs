using static System.Console;
while (true)
{
    var line = ReadLine();
    if (line == null)
        break;

    int lower = 0, upper = 0, number = 0, space = 0;

    foreach (var item in line)
    {
             if ('a' <= item && item <= 'z') lower++;
        else if ('A' <= item && item <= 'Z') upper++;
        else if ('0' <= item && item <= '9') number++;
        else if (' ' == item) space++;
    }
    WriteLine($"{lower} {upper} {number} {space}");
}
