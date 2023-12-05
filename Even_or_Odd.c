#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }
        break;
    }
}