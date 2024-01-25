#include<stdio.h>
int main(){
    int n,f,s;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<n ; i++ ){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&s);
    for(int i = 0 ; i<n ; i++ ){
        if(s == arr[i]) f=1;
    }
    if(f==1) printf("True");
    else printf("False");
}