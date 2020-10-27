#include<stdio.h>
int main()
{
	int v,h,n;
	scanf("%d%d",&v,&h);
	n=v/h;
	if(v%h == 0)
	{
		printf("%d",n);
	}
	else 
		printf("%d",n+1);
	return 0;
		
}
