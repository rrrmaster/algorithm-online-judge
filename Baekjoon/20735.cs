using System.Linq;
using static System.Convert;
using static System.Console;
using System.Text.RegularExpressions;

var n = ToInt32(ReadLine());
var count = Enumerable.Range(0, n).Where(p => Regex.Match(ReadLine().ToLower(), "(pink)|(rose)").Success).Count();
Write(count > 0 ? count : "I must watch Star Wars with my daughter");