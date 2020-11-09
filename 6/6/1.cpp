#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int max(int a, int b);
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = max(a, b);
	printf("max = %d", c);
	return 0;
}
int max(int a, int b)
{
	int c;
	if (a>b)
	{
		c = a;
	}
	else
	{
		c = b;
	}
	return(c);
}