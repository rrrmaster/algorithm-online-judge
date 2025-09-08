using static System.Console;

int[] a1 = new int[26];
var str = ReadLine();

for (int i = 0; i < str.Length; i++)
{
    a1[str[i] - 'a']++;
}
 str = ReadLine();
for (int i = 0; i < str.Length; i++)
{
    a1[str[i] - 'a']--;
}

int sum = 0;
for (int i = 0; i < 26; i++)
{
    sum += Math.Abs(a1[i]);
}
Write(sum);