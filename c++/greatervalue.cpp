#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d,r;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
        if(a>b) r=a;
        else r=b;
        
        if(c>r) r=c;
        
        if(d>r) r=d;
        
        printf("%d",r);
        
    return 0;
}