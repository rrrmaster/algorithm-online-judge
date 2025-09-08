#include<iostream>
int x,y,t,d[]={31,29,31,30,31,30,31,31,30,31,30,31};int main(){std::cin>>t;while(t--){std::cin>>x>>y;std::cout<<(x<24&&y<60?"Yes ":"No ")<<(x&&x<=12&&y&&y<=d[x-1]?"Yes\n":"No\n");}}