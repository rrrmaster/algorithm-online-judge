using static System.Console;

string str;
string cho = "ㄱㄲㄴㄷㄸㄹㅁㅂㅃㅅㅆㅇㅈㅉㅊㅋㅌㅍㅎ";

Input();
var value = Solution();
Output(value);

void Input()
{
    str = ReadLine();
}

string Solution()
{
    string value = string.Empty;
    foreach (var item in str)
    {
        var temp = item - '가';
        value += cho[(temp / (21 * 28))];
    }
    return value;
}

void Output(string value)
{
    Write(value);
}