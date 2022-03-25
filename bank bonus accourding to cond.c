#include<stdio.h>
int main()
{
	char gen;
	float balance,bonus;
	printf("\n Enter your gender (m/f)");
	scanf("%c",&gen);
	printf("\nEnter the bonus ");
		scanf("%f",&balance);
		if (gen=='f')
		{
			if (balance>5000)
			bonus=balance*0.05;
			else 
			bonus=balance*0.02;
			
		}
		else
		bonus=balance*0.02;
		
		printf("\n The bouns is = %0.3f ",bonus);
	
	
}
