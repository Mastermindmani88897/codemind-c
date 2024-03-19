#include<stdio.h>
#include<math.h>
int main(){
    int n,a,b,sum = 0;
    scanf("%d",&n);
    a = n*(n+1)/2;
    b = a*a;
    for(int i = 1;i<=n;i++){
        sum = sum +(i*i);
    }
    printf("%d",b-sum);
}