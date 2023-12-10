#include<stdio.h>
int main()
{
    int ip,ig;
    scanf("%d%d",&ip,&ig);
    int d=ig-ip;
    if(ig>ip)
    {
        printf("%d",d);
    }
    else
    {
        printf("NO");
    }
}