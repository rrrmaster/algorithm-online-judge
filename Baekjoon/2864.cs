using static System.Console;
using static System.Convert;

string a, b;
Input();
Output(Solution());

void Input()
{
    var str = ReadLine().Split();
    a = str[0];
    b = str[1];

}

(int min, int max) Solution()
{
    return (ToInt32(a.Replace('6', '5')) + ToInt32(b.Replace('6', '5')), ToInt32(a.Replace('5', '6')) + ToInt32(b.Replace('5', '6')));

}
void Output((int min, int max) value)
{
    Write($"{value.min} {value.max}");
}