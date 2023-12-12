#include<stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d %d %d",&n,&a,&b);
    for(n,a,b;a<=b;a++){
        c = a*n;
        printf("%d x %d = %d
",n,a,c);
    }
}