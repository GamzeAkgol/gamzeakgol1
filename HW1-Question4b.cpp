/*Compute home value program*/
#include<stdio.h>
#include<math.h>
void homevalue(void);
int main(void)
{
	homevalue();
	return(0);
	
}

void homevalue(void)
{
	int pop;/*popularity*/ /*input*/
	int size; /*input*/
	int hv; /*home value*/ /*output*/
	
	printf("Enter the popularity of the land:\n");
	scanf("%d",&pop);
	printf("Enter the size of the house:\n ");
	scanf("%d",&size);
	hv=(pow(pop,3)+pow(size,2))*10000;
	printf("Home value is %d",hv);
	
}
