using static System.Console;
using static System.Convert;

var pairs = new Dictionary<long, long>();
long n, p, q, x, y;
pairs[0] = 1;
var split = ReadLine().Split();
n = ToInt64(split[0]);
p = ToInt64(split[1]);
q = ToInt64(split[2]);
x = ToInt64(split[3]);
y = ToInt64(split[4]);
Write(Func(n));

long Func(long i)
{
    if (i <= 0) 
        return 1;
    if (pairs.ContainsKey(i)) 
        return pairs[i];
    var value = Func(i / p - x) + Func(i / q - y);
    pairs.Add(i, value);  
    return value;
}