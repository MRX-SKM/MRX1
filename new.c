#include<stdio.h>
int main()
{
	int *ptr;
	int a;
	ptr = &a;
	printf("enter the vlaue of a:  );
	scanf("%d",&a);
	printf("entered value is %d\n",*ptr);
	return 0;
}
