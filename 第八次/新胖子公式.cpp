#include<stdio.h> 
int main()
{
	double a,b,c;
	scanf("%lf%lf",&a,&b); 
	c=a/(b*b);
	printf("%.1f\n",c);
	if(c>25)
		printf("PANG\n");
	else 
		printf("Hai Xing\n");
	return 0;
 } 
