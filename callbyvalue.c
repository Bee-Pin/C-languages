/*Fuction call in C-->
Call by value
In call bye value, the actual value is just copied to the functional parameter 
that means the value will be valid till the function runs. Once it gets out of the
function it's original value is valid.*/ 


#include <stdio.h>
int sum(int a , int b)
{
    int sum=0;
    a=7,b=10;
    sum=a+b;
    printf("a=%d,b=%d",a,b);
    return sum;
}
int main()
{
   int a=10,b=9;
    printf("\nThe sum is %d",sum(a,b));
    printf("\na=%d,b=%d",a,b);
    return 0;
}

