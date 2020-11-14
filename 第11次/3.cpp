#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<10000;i++)
	{
		int n;
		scanf("%d",&n);
		if(n%2==1)
		{
			sum=sum+n;
		}
		else if(n<=0)
		{
			printf("%d",sum);
			return 0;
		}
	}
}
