using static System.Console;

var s = ReadLine();
Write(new string(s.Select(a=>F(a)).ToArray()));
char F(char a)
{
    if ('a' <= a && a <= 'z') return (char)((a - 'a' + 13) % 26 + 'a');
    else if ('A' <= a && a <= 'Z') return (char)((a - 'A' + 13) % 26 + 'A');
    else return a;
}