#include<iostream>
int n,t,c;main(){std::cin>>n;for(;n>0;t=t<n?t+1:1,n-=t,c++);std::cout<<c;}