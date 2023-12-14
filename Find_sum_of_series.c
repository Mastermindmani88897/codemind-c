#include<stdio.h>
int main(){
    int  n;
    float i,res = 0,n1;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++){
        n1=1/i;
        res = res + n1;
        
    }
    printf("%.2f",res);
    
}