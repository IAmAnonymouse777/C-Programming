#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("\nEnter the number ");
	scanf("%d",&n);
	n=n+10; 					// replace it by its own memory;
	printf("\nThe value is increamented by 10 in memory is = %d",n);

}
