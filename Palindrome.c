#include<stdio.h>
int main(){
    int n,res = 0 ,n1,i;
    scanf("%d",&n);
    i = n;
    while(n!=0){
        n1=n%10;//1  2  1
        res = res * 10 + n1 ;//1 12
        n/=10; //12
    }
    if( res == i)
    printf("True");
    else
    printf("False");
}