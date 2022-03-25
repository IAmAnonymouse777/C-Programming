#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,temp;
		printf("Enter X value");
		scanf("%d",&x);
		printf("Enter Y value");
		scanf("%d",&y);
		printf("\nvalue before swap\n");
		printf("\n X= %d",x);
		printf("\n Y= %d",y);
		temp=x;
		x=y;
		y=temp;
		printf("\n\n\n Value after swapp\n\n");
			printf("\n X= %d",x);
			printf("\n Y= %d",y);
}


