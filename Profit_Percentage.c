#include<stdio.h>
int main()
{
    float x,y,z;
    scanf("%f%f",&x,&y);
    z=((y-x)*100)/x;
    printf("%.2f",z);
}