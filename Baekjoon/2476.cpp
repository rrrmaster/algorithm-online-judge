#include<iostream>
#define L(b,v) if(m==b)for(i=6;i;i--)if(a[i]==m){c=v;break;}
int t,n,i,q;

int main() {
    std::cin >> t;
    while (t--) {
        int c,m,a[7] = {};
        for (i=0;i<3; i++) {
            std::cin >> n;
            m=std::max(m,++a[n]);
        }
        L(3,10000+1000*i)
        L(2,1000+100*i)
        L(1,100*i)
        q=std::max(c,q);
    }
    std::cout<<q;
}
