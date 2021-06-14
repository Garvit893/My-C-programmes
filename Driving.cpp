#include<stdio.h>
int main()
{int age;
printf("Enter the age:\n");
scanf("%d" , &age);
if(age>18 && age<70){
	printf("You can Drive\n.",age);
}
	else{
		printf("You cannot Drive\n.",age);
	}
	return 0;
}

