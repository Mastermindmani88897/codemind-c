#include<stdio.h>
int main()
{
    float b;
    scanf("%f",&b);
    if(b<=10000){
        printf("%.2f",(2*b));
    }
    else if(b<=20000){
    printf("%.2f",(2.15*b));
    }
    else{
        printf("%.2f",(2.25)*b);
    }
}