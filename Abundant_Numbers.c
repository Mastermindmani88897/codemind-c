#include<stdio.h>
int main(){
    int n,res = 0,j;
    scanf("%d",&n);
    for(j = 1; j < n; j++){
        if(n%j==0)
        res = res + j;
    }
    if(res >  n)
    printf("True");
    else 
    printf("False");
}