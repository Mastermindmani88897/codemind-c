#include<stdio.h>
int main(){
    int m,n,c;
	scanf("%d %d",&m,&n);
	for(c = 0 ;m<=n ; m++){
		if(m%3 == 0 && m%2 == 0){
		c++;
	}
	}
	printf("%d ",c);
}
