#include<stdio.h>

int main()
{
	int a=2;
	int b=4;
	int t;
	printf("a=%d  b=%d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("a=%d  b=%d",a,b);
	return 0;
}
