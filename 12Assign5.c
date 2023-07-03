#include<stdio.h>
void evenN(int n)
{
    if(n>=1)
    {
        evenN(n-1);
        printf("%d ",2*n);
    }
}
int main()
{
    evenN(20);
    return 0;
}