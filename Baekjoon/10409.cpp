#include <iostream>
int a[51], c, n, i, t;
main(){std::cin>>n>>t;for(;i<n;++i)std::cin>>a[i];while(n--){if(t<a[c])break;t-=a[c++];}std::cout<<c;}