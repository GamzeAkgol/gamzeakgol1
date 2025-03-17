/*Compute home value program*/
#include<stdio.h>
#include<math.h>
 int main(void)
 {
 	int size; /*input*/
 	int pop; /*input*/ /*popularity*/
 	int hv; /*output*/ /*homevalue*/
 	
 	printf("Enter the popularity of land:\n");
 	scanf("%d",&pop);
 	printf("Enter the size of the house:\n");
 	scanf("%d",&size);
 	
 	/*Compute the homevalue*/
 	hv=(pow(pop,3)+pow(size,2))*10000;
 	printf("Home value is %d",hv);
 	
 	
 	return 0 ;
 	
 	
 	
 	
}
