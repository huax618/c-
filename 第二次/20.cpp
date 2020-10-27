#include<stdio.h>
int main
{
	char x;
	x = getchar();
	x -= 32;
	printf("%c,%d",x,x);
	return 0;
} 
