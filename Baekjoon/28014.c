#include <stdio.h>

int n;
int h[5000001] = {};

int main()
{

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (h + i));
    }

    int c = 1;
    int i = 0;
    while (1)
    {
        if (i >= n)
            break;

        if (h[i] <= h[i + 1])
        {
            c += 1;
        }

        i += 1;
    }
    printf("%d", c);
    return 0;
}