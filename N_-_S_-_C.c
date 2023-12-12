#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(a=a+1;a<b;a++){
        printf("%d %d %d
",a,a*a,a*a*a);
    }
}