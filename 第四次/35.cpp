#include<stdio.h>
int main()
{
	int i,sum=0;
	scanf("%d",&i);
	do
	{
		sum = sum + i;
		i++;
	}
	while(i<=100);
		printf("%d",sum);
	return 0;
} 
