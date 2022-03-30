#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the charecter\n");
	scanf("%c",&ch);
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("%c is Vowel ",ch);
	printf("%c is not a Vowel ",ch);
	
}
