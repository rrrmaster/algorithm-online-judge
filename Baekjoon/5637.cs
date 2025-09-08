using System.Linq;
using static System.Console;
var max = string.Empty;
bool flag = true;
while (flag)
{
    var str = ReadLine();
    for (int i = 0; i < str.Length; )
    {
        int j = i;
        while (j < str.Length) 
        {
            if (('a' <= str[j] && str[j] <= 'z') || ('A' <= str[j] && str[j] <= 'Z') || str[j] == '-')
            {

            }
            else
            {
                break;
            }
            j++;
        }
        var temp = str.Substring(i, j - i);
        if(temp=="E-N-D")
        {
            flag = false;
            break;
        }
        if (max.Length < j - i)
        {
            max = temp;
        }
        i = j + 1;
    }
}
Write(max.ToLower());
