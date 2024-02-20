#include<stdio.h>
#include<math.h>
int main(){
	int n,i,even = 0 ,odd = 0,c;
	scanf("%d",&n);
	int arr[n];
	for(i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i =0 ;i<n;i++){
	    if(i%2==0)
		even = even + arr[i]; 
	}
	for(i=0;i<n;i++){
	    if(i%2!=0)
		odd = odd + arr[i];
	}
		c = abs(even-odd);
	printf("%d",c);
}