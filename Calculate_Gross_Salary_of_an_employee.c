#include<stdio.h>
int main()
{
    float s,h,d,p,g;
    scanf("%f %f %f",&s,&h,&d);
    p=(s/100)*12;
    g=s+h+d+p;
    printf("%.2f
%.2f",p,g);
}