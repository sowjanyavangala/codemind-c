#include<stdio.h>
int main()
{
    int i,j,n,r,c,s1=0,s2=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                s1=s1+a[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2!=0)
            {
                s2=s2+a[i][j];
            }
        }
    }
    printf("%d %d",s1,s2);
}