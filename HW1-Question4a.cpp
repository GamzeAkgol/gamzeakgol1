/*Compute home value program*/
#include<stdio.h>
#include<math.h>
int homevalue(int pop,int size); //prototype for function
int main(void)
{
	int pop; /*popularity*/ /*input*/
	int size; /*input*/
	int hv; /*homevalue*/ /*output*/
	
	printf("Enter the land of popularity:\n",pop);
	scanf("%d",&pop);
	printf("Enter the size of the house:\n",size);
	scanf("%d",&size);
	printf("Home value is %d:\n",homevalue(pop,size));
	
}

int homevalue(int pop,int size)
{
	return (pow(pop,3)+pow(size,2))*10000;
}
