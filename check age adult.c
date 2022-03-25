#include<conio.h>
#include<stdio.h>
int main ()
{
	int age ;
	printf("\n Enter your age5 ");
	scanf("%d",&age);
	if (age<18)
	printf("\nCHILD");
	else if(age<65)
	printf("\n ADULT");
	else 
	printf("\n SINIOR CITIZEN");
}
