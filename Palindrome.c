#include<stdio.h>
int main(){
    int n,i,n1,res=0;
    scanf("%d",&n);
    i=n;
    while(n!=0){
        n1=n%10;
        res = (res*10)+n1;
        n=n/10;
    }
    if(i==res)
        printf("Palindrome");
    else
    printf("Not Palindrome");
}