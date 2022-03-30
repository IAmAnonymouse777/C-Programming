#include<stdio.h>
int main()
{
	int x,y,z;
	 printf("Enter the three int num");
	 scanf("%d%d%d",&x,&y,&z);
	 if (x>y)
	 {
	 	if (x>z)
	 	printf("%d is Greater ",x);
	 	
		else 
		printf("%d is Greater ",z);
	 }
	 else 
	 	printf("%d is Greater ",y);
}
