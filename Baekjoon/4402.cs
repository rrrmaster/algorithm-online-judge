using System;

string str;
int[] soundex = new[] { 0, 1, 2, 3, 0, 1, 2, 0, 0, 2, 2, 4, 5, 5, 0, 1, 2, 6, 2, 3, 0, 1, 0, 2, 0, 2};
while (true)
{
    Input();
    if (string.IsNullOrEmpty(str))
        break;
    string soundexCode = Solution();
    Console.WriteLine(soundexCode);
}

void Input()
{
    str = Console.ReadLine();
}

string Solution()
{
    string code = string.Empty;
    int last = -1;
    foreach (var item in str)
    {
        int temp = soundex[item - 'A'];
        if (last != temp && temp != 0)
            code += temp;
        last = temp;
    }

    return code;
}