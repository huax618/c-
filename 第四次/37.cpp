#include<stdio.h>
int main()
{
	int i,sum=0;
	i=1;
	while(i<=100)
	{
		sum += i;
		i++;
	}
	printf("%d",sum);
	return 0;	
}
