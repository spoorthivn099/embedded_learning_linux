#include <stdio.h>
int main()
{
	int num,i;
	int fact=1;
	printf("enter the number :");
	scanf("%d",&num);
	for (i=num;i>0;i--){
	fact = fact*i;
	}
	printf("Factorial of %d is %d", num, fact);
	return 0;
}