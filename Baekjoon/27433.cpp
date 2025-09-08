#include <iostream>
int main()
{
    long n,a=1,i=1;
    std::cin >> n;
    for (;i<=n;i++)a*=i;
    std::cout << a;
}