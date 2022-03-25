#include<stdio.h>
#include<conio.h>
int main ()
{
	int pcm,cet;
	printf("\n Enter Pcm And Cet marks ");
	scanf("%d%d",&pcm,&cet);
	if (pcm>=150)
	{
		if (cet>=100)
		{
			printf("Student is Eligible for the  Engineering Addmission");
			
		}
				else
					printf("Student is Not Eligible for the  Engineering Addmission");
	}
	else
	printf("Student is Not Eligible for the  Engineering Addmission");
	
}
