#include<stdio.h>
void rodd(int n)
{
    if(n>=1)
    {
        printf("%d ",2*n-1);
        rodd(n-1);
    }
}
int main()
{
    rodd(20);
    return 0;
}