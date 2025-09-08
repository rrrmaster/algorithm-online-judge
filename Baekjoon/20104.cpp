#include "timecard.h"

static int N;

void init(int n) {
	N = n;
}

std::string convert(std::string s) {
    int size = s.size();
    for(int i=0;i<size;i++){
        
	    if ('A'<=s[i] &&s[i]<='Z') s[i] = (char)((s[i]-'A')+'a');
    }
	return s;
}
