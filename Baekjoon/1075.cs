using static System.Console;
int n = int.Parse(ReadLine()),f = int.Parse(ReadLine());
int temp = n - (n % 100);
for (int i = 0; i < 100; i++)
{
    if ((temp + i) % f == 0) 
    {
        Write($"{i/10}{i%10}");
        break;
    }
}
