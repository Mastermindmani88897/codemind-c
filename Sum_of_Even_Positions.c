#include<stdio.h>
int main(){
	int n,i,res  = 0;
	scanf("%d",&n);
	int arr[n];
	for(i =0;i<n;i++){
		scanf("%d",&arr[i]);
		if(i%2==0)
		res = res + arr[i]; 
	}
	
	printf("%d",res);
}