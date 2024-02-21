#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k = 1;
    for(i=0;i<n;i+=2){
        if(arr[i]%2==1)
        k=0;
    }
    if(k)
    printf("True");
    else 
    printf("False");
    
}
