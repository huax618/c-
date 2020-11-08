#include<stdio.h>
int max(int a,int b,int c)
{
	int sum1,sum;
	if(a>b)
	{
		sum1=a;
	} 
	else 
	{
		sum1=b;
	}
	if(sum1>c)
	{
		sum = sum1;
	}
	else
	{
		sum = c;
	}
	 
	 return(sum);
}
int main()
{
	int max(int a,int b,int c);
	int a,b,c,sum;
	scanf("%d%d%d",&a,&b,&c);
	sum = max(a,b,c);
	printf("sum = %d\n",sum);
	return 0;
}
