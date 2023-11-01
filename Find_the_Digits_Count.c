#include<stdio.h>
int main()
{
    int x=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        x++;
        n=n/10;
    }
    printf("%d",x);
}