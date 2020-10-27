#include<stdio.h>
int main()
{
	double x,result;
	scanf("%lf",&x);
	if(x == 0)
	{
		result = 0 ;
		printf("f(%.1lf) = %.1lf",x,result);
	}
	else 
	{
		result = 1.0/x ;
		printf("f(%.1lf) = %.1lf",x,result);
	} 
	return 0;
} 
