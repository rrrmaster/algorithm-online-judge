int a=int.Parse(Console.ReadLine()),b=0;
while(b++<a)
{
var d=Array.ConvertAll(Console.ReadLine().Split(),int.Parse).Sum();
Console.Write($"{d}\n");
}