#include<stdio.h>
#include<math.h>
int main()
{
    float ci,pi,r,t,A;
    scanf("%f%f%f",&pi,&r,&t);
    A=pi*pow((1+r/100),t);
    ci=A-pi;
    printf("%.2f",ci);
}