#include<stdio.h>
int main()
{
	int arr[10];
	int s=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",arr[i]);
	}
	for(int j=1;j<=i;j++)
	{
		if(j%2==0)
		{
			s+=j;
		}
	}
	printf("%d",s);
	return 0;
}
