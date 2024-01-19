#include<stdio.h>
int main ()
{  
	int a,b,rows;  
	scanf("%d",&rows);
	//decreases the number of rows
	for (a=rows;a>=1;a--)  
	{			
		//prints star in increasing order   
		for (b=1;b<=a;b++) 
		{      
			printf("* ");  
		}  
		printf("
");
	}
}