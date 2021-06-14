#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter the value1:\n, %f");
	scanf("%f", &a);
	printf("Enter the value2:\n, %f");
	scanf("%f" , &b);
	printf("The sum of a+b is:%f\n",a+b);
	printf("The sum of a-b is:%f\n",a-b);
	printf("The sum of a*b is:%f\n",a*b);
	printf("The sum of a/b is:%f\n",a/b);
	printf("The square of a is:%f\n",a*a);
	printf("The square of b is:%f\n",b*b);
	return 0;
}

