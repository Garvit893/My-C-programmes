#include<stdio.h>
int main(void)
{
	char c;
	int flag;
	printf("Enter the character:");
	scanf("%c", &c);
	flag=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
	if(flag){
		printf("%c is a vowel.", c);
		
		}
	else{
		printf("%c is a consonant.",c);
	}
	
	return 0;
}
