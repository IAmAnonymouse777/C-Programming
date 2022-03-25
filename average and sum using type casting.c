#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c, sum;
	float average;
	printf("\nEnter three values ");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	average=(float)sum/3;		// type casting;
	printf("\n sum= %d",sum);
		printf("\n Average = %f",average);
}
