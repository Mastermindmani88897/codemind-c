#include<stdio.h>
int main(){
    int n,sum = 0;
    scanf("%d",&n);
    while(n!=0){
        int n1=n%10;
        sum = sum + n1;
        n/=10;
    }
    printf("%d",sum);
}