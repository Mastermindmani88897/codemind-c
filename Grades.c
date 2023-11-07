#include<stdio.h>
int main()
{
    int p,c,b,m,cs,s;
    scanf("%d %d %d %d %d",&p,&c,&b,&m,&cs);
    s=((p+c+b+m+cs)/5);
    if(s>=90){
        printf("Grade A",s);
    }
    else if(s>=80){
        printf("Grade B",s);
    }
    else if(s>=70){
        printf("Grade C",s);
    }
    else if(s>=60){
        printf("Grade D",s);
    }
    else if(s>=40){
        printf("Grade E",s);
    }
    else{
        printf("Grade F",s);
    }
}