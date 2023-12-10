#include<stdio.h>
int main()
{
    float ir;
    scanf("%f",&ir);
    float inf;
    scanf("%f",&inf);
    if(ir>=2*inf)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}