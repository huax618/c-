#include<stdio.h>
int main()
{
	long  int arr[100];
	long  int  n,x;
	int i,j;
	scanf("%d%d",&n,&x);
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<=i;j++)
	{
		if(arr[j]==x)
		{
			printf("%d ",j);
			break ;
		}
		else
		printf("not found");
	}		
	
   	return 0;
}

