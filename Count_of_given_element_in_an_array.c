#include<stdio.h>
int main(){
	int n,i,c;
	scanf("%d",&n);
	int arr[n];
	for(i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x;
	scanf("%d",&x);
	for(i = 0 ;i < n ; i++){
	    if(arr[i] == x)
	    c++;
	}
	printf("%d",c);
}