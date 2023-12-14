#include<stdio.h>          //1124
int main(){
	int n,n1,res = 0,n2=1;
	scanf("%d",&n);
	while(n!=0){
		n1=n%10;//4  2
		res = res + n1;//4 +2
		n2 = n2*n1;//4
		n=n/10;//112
		
	}
	if(res == n2)
	printf("Spy Number");
	else 
	printf("Not Spy Number");
}