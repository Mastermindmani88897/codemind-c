#include<stdio.h>
int main() {
	int x,i,j;
	scanf("%d",&x);
	for(i=0;i<=x-1;i++) {
		for(j=x-i;j<x+1;j++) {
			printf("%d ",j);
		}
		printf("
");
	}
}