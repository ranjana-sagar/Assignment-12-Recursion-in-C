#include<stdio.h>
int oct(int n)
{
    if(n>=8)
    {
        int o=0;
        o=oct(n/8);
        return o*10+n%8;
    }
    else
        return n;
}
int main()
{
    int o;
    o=oct(127);
    printf("%d",o);
    return 0;
}