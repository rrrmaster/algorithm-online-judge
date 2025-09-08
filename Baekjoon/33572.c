#include <stdio.h>

long long int a[100001] = {};

int main()
{
    int n;
    long long int m;

    scanf("%d %lld", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", (a + i));
    }

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] - 1;
    }
    printf("%s", sum >= m ? "DIMI" : "OUT");
    return 0;
}