#include<stdio.h>
int main()
{
	int a;
	float cost;
	scanf("%d",&a);
	if(a <= 2048)
	{
		cost = 10;
	}
	else if(a <= 4096 )
	{
			cost = 10 + 0.02*(a-2048);
			printf("本月手机流量费： %.2f",cost);
	}
	else if(a > 4096) 
			cost = 10+ 0.02*2048 + 0.01*(a-4096);
			printf("%.2f",cost);
	return 0;
 } 
