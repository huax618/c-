#include<stdio.h>
#include<math.h>
int main()
{
	int i,X;
	scanf("%d",&X);
	double a;
	for(i=1;i<=X;i++)
	{
		a=sqrt(i);
		printf("%.2lf\n",a);
	}
	return 0;
}
