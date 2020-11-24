#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},m=1,n=10,i=0,b,k;
	scanf("%d",&k);
	for(i=0;i<=9;i++)
	{
		if(k<0 || k>9)
		{
			printf("error.");
			m=-m;
			break;
		}
		if(i==9)
		printf("%d \n",a[i]);
		else
		printf("%d ",a[i]);
	}
	for(i=0,b=1;i<=9 && m==1;i++,b++)
	{
		if(k==9)
		{
			if(i==k)
			{
			
			}
			else if(b==9)
			printf("%d ",a[i]);
			else
			printf("%d ",a[i]);
		}
		else
		{
				if(i==k)
		{
			
		}
		else if(b==10)
		printf("%d ",a[i]);
		else
		printf("%d ",a[i]);

		}
	
	}
	return 0;
}

