#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
#define max(c,d) ((c>d) ? c:d)
int max_of_four(int a,int b,int  c,int d)
{
    int temp_max=max(a,b);
    temp_max=max(temp_max,c);
    temp_max=max(temp_max,d);
    return temp_max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
