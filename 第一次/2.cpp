#include<stdio.h>
int main()
{
	int a,b,c,e,f,g,h,j;
	a=8;
	b=9;
	c=10;
	e=a/3+b;
	f=a/3+e/3+c;
	g=a/3+e/3+f/3;
	j=a/3+e/3+g/3;
    h=f/3;
	printf("%d %d %d",g,j,h);
	return 0;
}
