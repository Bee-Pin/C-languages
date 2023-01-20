//In this, address is passed so that the value remains unchanged in the whole program 
//after calling.
#include<stdio.h>
void sum(int *a, int *b)
{
	*a=10,*b=9;
	int sum=0;
	sum=*a+*b;
	printf("\nSum is %d\n",sum);
	printf("\na=%d,b=%d",*a,*b);
}
int main()
{
	int x,y,z;
	printf("Enter x and y ");
	scanf("%d%d",&x,&y);
	z=x+y;
	printf("\nSum is %d",z);
	sum(&x,&y);
	printf("\na=%d,b=%d",x,y);
	return 0;
}

//OUTPUT:
/*Enter x and y: 
5
6

Sum is 11
Sum is 19

a=10,b=9
a=10,b=9 */
