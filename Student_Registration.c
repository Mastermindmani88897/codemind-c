#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    while(a>0){
        scanf("%d %d %d",&b,&c,&d);
        if((c-b)>=d)
        printf("YES
");
        else
        printf("NO
");
    
        a--;
    }
    
}