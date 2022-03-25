#include<stdio.h>
#include<conio.h>
int main()
{
 	float basic, hra, da,gross;
 	printf("\nEnter the basic sallary");
 	scanf("%f",&basic);
 		if (basic<1500)
 		{
 			hra=basic*0.10;
 			da=basic*0.25;
 			
		 }
		 	if(basic>=1500)
		 	{
		 		hra=500;
		 		da=basic*0.50;
			 }
			 gross=basic+hra+da;
			 printf("\n The Gross salary of an employee = %0.2f ",gross);
}
