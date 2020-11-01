#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double sum=0;
	for(i=0;i<64;i++)
	{
		sum = sum + pow(2,i)/200000.0;
	}
		printf("%lf",sum);
	return 0;
 } 
