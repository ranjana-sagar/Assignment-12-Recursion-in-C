#include<stdio.h>
void printR(int n)
{
    if(n>=1)
    {
        printf("%d ",n);
        printR(n-1);
    }
}
int main()
{
    printR(20);
    return 0;
}