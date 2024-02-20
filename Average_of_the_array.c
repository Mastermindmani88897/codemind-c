#include<stdio.h>
int main(){
	int n,i,c=0;
	float res =0;
	scanf("%d",&n);
	int arr[n];
	for(i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}for(i=0;i<n;i++){
	    res = res + arr[i];
	    c++;
	}
	printf("%.2f",res/c);
}