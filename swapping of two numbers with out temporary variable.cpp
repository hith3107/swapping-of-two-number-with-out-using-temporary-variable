#include<stdio.h>
main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("before swapping of two numbers are a=%d b=%d",a,b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("after swapping of two numbers are a=%d b=%d",a,b);
}
