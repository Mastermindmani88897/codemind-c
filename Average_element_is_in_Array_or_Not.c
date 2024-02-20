#include<stdio.h>
int main(){
	int n,i,res = 0,c=0;
	float avg;
	scanf("%d",&n);
	int arr[n];
	for(i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i = 0 ;i < n ; i++){
	   res = res +arr[i]; 
	}
	avg = res/n;
	for(i=0;i<n;i++){
	    if(avg==arr[i]){
       printf("True");
       break;
	    }
	    c++;
    }
    if(c==n)
    printf("False");
}