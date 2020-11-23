#include<stdio.h>
int main()
{
	long long arr[100];
	long long n,x;
	scanf("%d%d",&n,&x);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j j=0;j<n;j++)
	{
		if(arr[j]==x)break;
	}
	if(j==n)
	{
		printf("NotFound");
	}
}
