#include<stdio.h>
void bina(int);
int main()
{
    bina(25);
    return 0;
}
void bina(int n)
{
    int b=0;
    if(n>0)
    {
        bina(n/2);
        printf("%d",n%2);
    }
}