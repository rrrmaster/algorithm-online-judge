using System;
using System.Linq;
using System.Text;
using static System.Console;

var sb = new StringBuilder();
var temp = Array.ConvertAll(ReadLine().Split(), int.Parse);
var m = temp[0];
var n = temp[1];
var arr = Array.ConvertAll(ReadLine().Split(), int.Parse).OrderBy(p=>p).ToArray();
var visible = new int[m];
var check = new bool[m];
F(0);
Write(sb.ToString());

void F(int depth)
{
    if (depth == n)
    {
        for (int i = 0; i < n; i++)
        {
            sb.Append($"{visible[i]} ");
        }
        sb.Append('\n');
        return;
    }

    int pre = -1;
    for (int i = 0;i < m; i++)
    {
        if (!check[i] && pre != arr[i]) 
        {
            check[i] = true;
            visible[depth] = arr[i];
            pre = arr[i];
            F(depth + 1);
            check[i] = false;
        }
    }
}