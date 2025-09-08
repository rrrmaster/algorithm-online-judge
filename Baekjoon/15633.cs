using System.Linq;
using static System.Console;
int n=System.Convert.ToInt32(ReadLine());
Write(Enumerable.Range(1,n).Where(p =>n%p== 0).Sum()*5-24);