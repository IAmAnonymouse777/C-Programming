#include<stdio.h>
#include<conio.h>
int main ()
{
	int x;
	printf("\n Enter two integer");
	scanf("%d",&x);
	if(x%7==0)
	printf("%d is divisible by 7 ",x);
		else
			printf("%d is not divisible by 7",x);
			return 0;
}
