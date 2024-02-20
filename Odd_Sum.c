#include<stdio.h>
int main(){
    int n,i,j,res = 0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2!=0)
        res = res + arr[i];
    }
    printf("%d",res);
    
}