#include<conio.h>
#include<stdio.h>
int main ()
{
	char x;
	printf("\n Enter ONE charecter ");
	scanf("%c",&x);
	if (x=='A')
	printf("Excellent");
	else
	if(x=='B')
	printf("Good");
	else
	if(x=='C')
	printf("Fair");
	else
	if (x=='D')
	printf("Poor");
	else 
	if(x=='F')
	printf("Fail");
	else
	printf("Invalid input");

}
