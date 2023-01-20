
//Call by value just copies the value to the function and its 
//value is valid just in that function. 
#include<stdio.h>
void sum(int a, int b)
{
	a=10,b=8;
	int sum=0;
	sum=a+b;
	printf("\nSum is %d\n",sum);
	printf("\na=%d,b=%d",a,b);
}
int main()
{
	int x,y,z;
	printf("Enter x and y ");
	scanf("%d%d",&x,&y);
	z=x+y;
	printf("\nSum is %d",z);
	sum(x,y);
	printf("\na=%d,b=%d",x,y);
	return 0;
}

/*OUTPUT: 
Enter x and y: 
5
6

Sum is 11
Sum is 18

a=10,b=8
a=5,b=6
*/

