#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	while(scanf("%d",&num)==1)
	{
		int a=num%10;
		int b=num%100/10;
		int c=num/100;
		if(a!=0)
		{
			printf("%d%d%d\n",a,b,c);
	    	continue;
		}
	    if(a==0&&b!=0)
	    {
	    	printf("%d%d\n",b,c);
	    	continue;
		}
	    if(a==0&&b==0)
	    {
	    	printf("%d\n",c);
	    	continue;
		}
	}
	return 0;
}
