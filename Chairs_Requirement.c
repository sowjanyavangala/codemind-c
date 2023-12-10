#include<stdio.h>
int main()
{
    int students,ec;
    scanf("%d%d",&students,&ec);
    int nc=(students>ec)*(students-ec);
    printf("%d",nc);
}