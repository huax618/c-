#include<stdio.h>
int main()
{
	int i,j,k;
	scanf("%d",&i);
	printf("sum is %d, then perhaps:\n",i);
	for(j=1;j<i;j++)
	{
		k=i-j;
		printf("rabbits=%d,chickens=%d\n",j,k);
	}
	return 0;
}
