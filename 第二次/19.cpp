#include<stdio.h>
int main()
{
	int a,b,c,d,sum;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	sum = a+b+c+d;
	printf("┌───┬───┐\n");
	printf("│ 季度 │ 销量 │\n");
	printf("├───┼───┤\n");
	printf("│一季度│ %d│\n",a);
	printf("├───┼───┤\n");
	printf("│二季度│ %d│\n",b);
	printf("├───┼───┤\n");
	printf("│三季度│  %d│\n",c);
	printf("├───┼───┤\n");
	printf("│四季度│ %d│\n",d);
	printf("├───┼───┤\n");
	printf("│ 全年 │%d│\n",sum);
	printf("└───┴───┘\n");
	return 0;
 } 
