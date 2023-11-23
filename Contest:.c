#include<stdio.h>
int main(){
    int z,x,y;
    scanf("%d %d %d",&z,&x,&y);
    if(z<=(x+(2*y))){
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
    
}