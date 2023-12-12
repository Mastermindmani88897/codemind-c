#include<stdio.h>
int main(){
    int a,c,d;
    scanf(" %d %d",&a,&c);
    for(c =1;c<=12;c++){
        d = a*c;
        printf("%d x %d = %d
",a,c,d);
    }
}