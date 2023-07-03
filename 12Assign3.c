#include<stdio.h>
void oddn(int n)
{
    if(n>=1)
    {
        oddn(n-1);
        printf("%d ",2*n-1);
    }
}
int main()
{
    oddn(20);
    return 0;
}