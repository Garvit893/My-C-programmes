#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d", &a);
	if(a%2==0)
	{printf("The number %d is even.\n");
	}
	else
	{printf("The number %d is odd.\n", a);
	}
 return 0;
}
