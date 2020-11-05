#include<stdio.h>
void fun()
{
	int a,c,e,g,sum1;
	float b,d,f,h,sum2;
	scanf("%d%f\n",&a,&b);
	scanf("%d%f\n",&c,&d);
	scanf("%d%f\n",&e,&f);
	scanf("%d%f",&g,&h);
	sum1 = a+c+e+g ;
	sum2 = b+d+f+h ;
printf("┌───┬───┬─────┐\n");
printf("│ 季度 │ 数量 │   金额   │\n");
printf("├───┼───┼─────┤\n");
printf("│一季度│ %d│ %.2f│\n",a,b);
printf("├───┼───┼─────┤\n");
printf("│二季度│ %d│ %.2f│\n",c,d);
printf("├───┼───┼─────┤\n");
printf("│三季度│ %d│ %.2f│\n",e,f);
printf("├───┼───┼─────┤\n");
printf("│四季度│ %d│ %.2f│\n",g,h);
printf("├───┼───┼─────┤\n");
printf("│ 全年 │ %d│ %.2f│\n",sum1,sum2);
printf("└───┴───┴─────┘\n");



}
int main()
{
	fun();
	return 0;
}
 
