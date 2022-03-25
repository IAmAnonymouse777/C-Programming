#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
  float rate,cost;
  printf("\nEnter Dozen Rate of banana");
  scanf("%f",&rate);
  printf("\n Enter the qwantity you want ");
  scanf("%d",&n);
  cost=rate/12;
  printf("\n The cost of one banana is = %f ",cost);
  cost=rate/12*n;
  printf("\n The cost of total banana is = %f",cost);
  
}
