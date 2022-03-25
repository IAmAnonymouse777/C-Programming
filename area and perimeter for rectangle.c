#include<stdio.h>
#include<conio.h>
int main()
{
	float length,breath,a,p;
	printf("\nEnter the length of rectangle");
	scanf("%f",&length);
		printf("\nEnter the breath of rectangle");
	scanf("%f",&breath);
	a=length*breath;
	p=2*(length+breath);
	printf("\n Area = %f",a);
	printf("\n perimeter = %f",p);
	
}
