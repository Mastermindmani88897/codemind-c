#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    while(b>=a){
        printf("%d ",b);
        b--;
    }
}