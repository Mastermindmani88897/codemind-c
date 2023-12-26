#include<stdio.h>
int main(){
    int a,b,c,n;
    scanf("%d",&n);
    a = 0;b = 1; 
    c= a + b;
    for( a,b;c < n ;c= a+b ){
        a = b;
        b = c;
    }
    if( c == n)
    printf("True");
    else
    printf("False");
}