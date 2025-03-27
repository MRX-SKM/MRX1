#include<stdio.h>
int main()
{
	int *ptr1,*ptr2;
	int a,b,c;
	ptr1 = &a;
	ptr2 = &b;
	printf("enter the value of a and b: ");
	scanf("%d,%d",&a,&b);
	c = *ptr1 + *ptr2;
	printf("result: %d",c);
	return 0;
}
