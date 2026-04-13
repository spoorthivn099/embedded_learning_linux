#include <stdio.h>
int main()
{
	int a,b;
	int temp;
	printf("enter the number a :");
	scanf("%d",&a);
	printf("enter the number b :");
	scanf("%d",&b);
	printf("Before swap a is %d and b is %d \n",a ,b);
	temp = a;
	a=b;
	b = temp;
	printf("After swap  a is %d and  b is %d ",a , b );
	return 0;
}