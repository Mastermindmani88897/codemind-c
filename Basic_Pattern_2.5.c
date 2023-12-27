#include<stdio.h>
int main(){
    int n,n1;
    scanf("%d",&n);
    n1 = n + 64;
    for( int i = 1; i<=n ; i++){
        for(int j = 1 ; j <= i ; j++){
            printf("%c ",n1);
        }
        n1--;
        printf("
");
    }
}