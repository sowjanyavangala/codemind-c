#include<stdio.h>
int main()
{
int n, x, y;
scanf("%d",&n);
for(x = 1; x <= n; x++)
{
for(y = 1; y <= x; y++)
{
printf("%c ",'A' + y -1);
}
printf("
");
}
}