#include<stdio.h>
int main()
{
	int arr[100];
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++)
	{
		if(arr[0]<arr[j])
		{
			arr[0]=arr[j];
			i=j;
		}
		else if(arr[0]==arr[j])
		{
			arr[0]=arr[j];
			if(i>j)
			{
				i=j;
			}
		}
		
	}
	printf("%d %d",arr[0],i);
	return 0;
}
