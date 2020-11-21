#include<stdio.h>
int main()
{
	int arr[6]={10,13,9,20,5,18};
	int i,n;
	scanf("%d",&n);
	for(i=0;i<6;i++)
	{
		if(n==arr[i])
		{
			printf("第%d个元素\n",i+1);
		}
		else 
		{
			printf("查无此元素\n"); 
		}
	}
	return 0;
}
