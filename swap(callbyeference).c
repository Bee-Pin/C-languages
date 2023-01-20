
#include<stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\nAfter swapping \na=%d, b=%d",*a,*b);	
}


int main()
{
	int x,y;
	printf("Enter x and y: ");
	scanf("%d%d",&x,&y);
	printf("\nBefore swapping\na=%d, b=%d",x,y);
	swap(&x,&y);
	return 0;
}
