#include<iostream>

int n, a, b, c,m;
int main() {
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        char s;
        std::cin >> s;
        s -= 'A';
        a+=i%3==s;
        b+=((i % 2 == 0 ? 1 : ((i/2) % 2 == 0 ? 0 : 2)) == s);
        c+=(i/2+2)%3==s;
        m=std::max(std::max(a,b),c);
    }
    std::cout<<m<<(m==a?"\nAdrian\n":"\n")<<(m==b?"Bruno\n":"")<<(m==c?"Goran":"");
}