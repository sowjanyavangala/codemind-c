#include<stdio.h>
int main()
{
    int n,m,p,c,s,e;
    scanf("%d%d%d%d%d",&m,&p,&c,&s,&e);
    n=((m+p+c+s+e)/5);
    if(n>=90)
    {
        printf("Grade A");
    }
    else if(n>=80)
    {
        printf("Grade B");
    }
    else if(n>=70)
    {
        printf("Grade C");
    }
    else if(n>=60)
    {
        printf("Grade D");
    }
    else if(n>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}