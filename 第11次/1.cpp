#include<stdio.h>
int total(int n)
{
	int j=0,i;
	for (i = 1; i <= n; i++)
	{
		j += i;
	}
	return j;
}
int main()
{
	int n,i;
	double s=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		s += 1.0 / total(i);
	}
	printf("%lf", s);
	return 0;
}
