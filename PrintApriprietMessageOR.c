#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the charecter\n");
	scanf("%c",&ch);
	if (ch=='R'||ch=='r')
	printf("Red");
	else if (ch=='G'||ch=='g')
	printf("Green");
	else if (ch=='b'||ch=='B')
	printf("Blue");
	else 
	printf("any other...");
}

