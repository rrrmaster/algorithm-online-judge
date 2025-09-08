using static System.Console;

var n = int.Parse(ReadLine());
var s = ReadLine();
var l = Enumerable.Range(0, n).Select(_ => int.Parse(ReadLine())).ToList();
var t = new Stack<double>();

foreach (var i in s)
{
    if (i is >= 'A' and <= 'Z')
        t.Push(l[i - 'A']);
    else
    {
        var b = t.Pop();
        var a = t.Pop();

        t.Push(i switch
        {
            '+' => a + b,
            '-' => a - b,
            '*' => a * b,
            '/' => a / b,
            _ => 0
        });
    }
}

WriteLine(t.Pop().ToString("F2"));