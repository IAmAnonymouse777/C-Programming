#include<stdio.h>
int main()
{
	int a,b,c,d;
		printf("\nEnter the four int ");
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if (a<b&&a<c&&a<d)
		printf("\n %d is smaller ",a);
		else if (b<c&&b<d)
			printf("\n %d is smaller ",b);
			else if (c<d)
				printf("\n %d is smaller ",c);
				else
					printf("\n %d is smaller ",d);
		
}
