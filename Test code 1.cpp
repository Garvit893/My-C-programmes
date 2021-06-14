#include<stdio.h>
int main()
{
	int a,b ;
	printf("Enter the value:\n");
	scanf("%d", &a);
	printf("Enter the value:\n");
	scanf("%d" , &b);
	
	if(a+b<10)
	{
		printf("The sum is less than 10.\n");
	}
	
	else
	{
		printf("The sum is greater than 10.\n");
	}
	}
