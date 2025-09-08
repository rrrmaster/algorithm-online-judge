using static System.Console;
using static System.Convert;

var pairs = new Dictionary<long, long>();
long n,p, q;
pairs[0] = 1;
var split = ReadLine().Split();
n = ToInt64(split[0]);
p = ToInt64(split[1]);
q = ToInt64(split[2]);
Write(Func(n));

long Func(long i)
{
    if (pairs.ContainsKey(i)) 
        return pairs[i];
    var value = Func(i / p) + Func(i / q);
    pairs.Add(i, value);  
    return value;
}