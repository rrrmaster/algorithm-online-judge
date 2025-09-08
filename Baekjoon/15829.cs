using static System.Console;
using static System.Convert;

long sum = 0, m = 1234567891, r = 1;

int n = ToInt32(ReadLine());
for (int i = 0; i < n; i++)
{
    sum = (sum + (Read() - 'a' + 1) * r) % m;
    r = (r * 31) % m;
}
Write(sum);
