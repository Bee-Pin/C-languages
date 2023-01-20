#include <stdio.h>
void fun(int *x,int *y);
int main()
{
    int x=5,y=7;
    fun(&x,&y);  
    printf("\nx=%d,y=%d\n",x,y);
    return 0;
}
void fun(int *x, int *y)   
{
    *x=7;  
    *y=5;
    printf("x=%d,y=%d",*x,*y);
}
