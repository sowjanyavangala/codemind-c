#include<stdio.h>
int main()
{
    int n,on,fd,ld;
    scanf("%d",&n);
    on=n;
    ld=n%10;
    while(n>=10)
    {
        n/=10;
    }
    fd=n;
    int sum=fd+ld;
    printf("%d",sum);
}