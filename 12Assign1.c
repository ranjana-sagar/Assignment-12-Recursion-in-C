#include<stdio.h>
void printn(int n)
{
    if(n>0)
    {
       printn(n-1);
       printf("%d ",n);
    }   
}
int main()
{
    int n=20;
    printn(n);
    return 0;
}
