#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("\n Enter the 1st number ");
	scanf("%d",&x);
		printf("\n Enter the 2nd number ");
	scanf("%d",&y);
	if (x<y)
	printf("\n The %d is greater ",y);
	if(x>y)
		printf("\nThe %d is greater ",x);
		if (x==y)
			printf("\nThe %d is Equal to %d ",x,y);
	
		
return 0;
}
