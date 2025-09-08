#include<iostream>
#include<regex>
using namespace std;int i,f,a;char s[11];int main() {for (;i<5&&cin>>s;++i){a=regex_search(s,regex("FBI+"));f =f||a;if(a)cout<<i+1<<' ';}if(!f)cout<<"HE GOT AWAY!";}