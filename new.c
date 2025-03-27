#include<stdio.h>
int main()
{
	int *ptr1,*ptr2;
	int a,b;
	ptr1 = &a;
	ptr2 = &b;
	printf("enter the vlaue of a and b:  );
	scanf("%d,%d",&a,&b);
	printf("entered values are %d,%d\n",*ptr1,*ptr2);
	return 0;
}
