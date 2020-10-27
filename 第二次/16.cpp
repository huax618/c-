#include<stdio.h>
int main()
{
 int a,b,c,d,e;
 e=a+b+c+d;
 scanf("%d%d%d%d",&a,&b,&c,&d);
 printf("┌───┬───┐");
 printf("│ 季度 │ 销量 │");
 printf("├───┼───┤");
 printf("│一季度│ a│");
 printf("├───┼───┤");
 printf("│二季度│ b│");
 printf("├───┼───┤");
 printf("│三季度│ c│");
 printf("├───┼───┤");
 printf("│四季度│ d│");
 printf("├───┼───┤");
 printf("│ 全年 │e│");
 printf("└───┴───┘");
 return 0;
 
 
 } 
