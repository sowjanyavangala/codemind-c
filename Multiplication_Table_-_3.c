#include<stdio.h>
int main()
{
    int n,a,i,b;
    scanf("%d%d%d",&n,&a,&b);
    for(i=n;a<=b;a++)
    {
        printf("%d x %d = %d
",n,a,n*a);
    }
}