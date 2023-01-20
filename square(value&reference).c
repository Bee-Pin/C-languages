//CALL BY VALUE
#include<stdio.h>
void square(int x)
{
	int sq;
	x=10;
	sq= x * x;
	printf("Sq= %d\n",sq);
}

int main()
{
	int x;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("You just entered %d\n",x);
	square(x);
	printf("After calling the function x = %d",x);
	return 0;
	
}

//CALL BY REFERENCE
#include<stdio.h>
void square(int *x)
{
	int sq;
	*x=10;
	sq= *x * *x;
	printf("Sq= %d\n",sq);
}

int main()
{
	int x;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("You just entered %d\n",x);
	square(&x);
	printf("After calling the function x = %d",x);
	return 0;
	
}



