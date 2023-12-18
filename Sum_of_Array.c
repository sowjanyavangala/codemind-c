//sum of all the elements in the given array
#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	int arr[n],i;
	//reading arry element
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);//1 2 3 4 5
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];//0+1=1+2=3
	}
	printf("%d",sum);
}