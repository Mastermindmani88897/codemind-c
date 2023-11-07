#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%2!=0 || x%2==0 && x>=6 && x<=20){
        printf("weird");
    }
    else if(x%2==0 && x>=2 && x<=5 || x>=20){
        printf("not weird");
    }
}
    