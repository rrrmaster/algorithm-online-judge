using static System.Console;
using static System.Convert;
var  p = new long[101];
p[0] = p[1] = p[2] = 1;
p[3] = p[4] = 2;
p[5] = 3;
for (int i = 5; i < 100; i++)
{
    p[i] = p[i - 1] + p[i - 5];
}
var t = ToInt32(ReadLine());
while (t > 0) 
{
    t -= 1;
    WriteLine(p[ToInt32(ReadLine())-1]);
}