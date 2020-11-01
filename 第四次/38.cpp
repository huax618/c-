#include<stdio.h>
int main()
{
	int i,sum;
	i=10;
	sum=0;
	do
	{
		sum = sum + i;
		i--;
	}
	while (i!=0);
	printf("sum = %d",sum);
	return 0;
}
