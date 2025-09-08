using static System.Console;

const int n = 8;
string str;

for (int i = 0; i < 3; i++)
{
    Input();
    Output(Solution());
}

void Input()
{
    str = ReadLine();
}

int Solution()
{
    int m = 1;
    int max = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            m += 1;
            
        }
        else
        {
            m = 1;
        }
        max = Math.Max(max, m);
    }
    return max;
}

void Output(int value)
{
    WriteLine(value);
}