#include<stdio.h>
#include<math.h>
void fun()
{
	int money,year;
	double rate,ans;
	scanf("%d%d%lf",&money,&year,&rate);
	ans = money*pow(1+rate,year);
	printf("sum = %.2f",ans);
}
int main()
{
	fun();
	return 0;
}
