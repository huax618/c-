#include<stdio.h>
int main()
{
	int a,i,sum;
	scanf("%d",&a);
	sum=0;
	for(i=1;i<=a;i++)
	{
		sum+=i;
		if(sum>a)
		break;
		}
	printf("Result: n=%d, sum=%d",i-1,sum-i);
	return 0;
}
