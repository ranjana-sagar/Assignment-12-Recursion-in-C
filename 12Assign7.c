#include<stdio.h>
void squarN(int n)
{
    if(n>=1)
    {
        squarN(n-1);
        printf("%d ",n*n);
    }
}
int main()
{
    squarN(20);
    return 0;
}