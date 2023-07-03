#include<stdio.h>
void Reven(int n)
{
    if(n>=1)
    {
        if(n>=1)
         printf("%d ",2*n);
         Reven(n-1);
    }
}
int main()
{
    Reven(15);
    return 0;
}