#include<stdio.h>
int main()
{
    int Sum,Difference,Product,Quotient,Reminder,a,b;
    scanf("%d%d",&a,&b);
    Sum=a+b;
    Difference=a-b;
    Product=a*b;
    Quotient=a/b;
    Reminder=a%b;
    printf("Sum:%d
",Sum);
    printf("Difference:%d
",Difference);
    printf("Product:%d
",Product);
    printf("Quotient:%d
",Quotient);
    printf("Remainder:%d
",Reminder);
    
}