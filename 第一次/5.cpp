#include <stdio.h>
int main(int argc, char *argv[0])
{
	float mon,sal;
    int i,year,type;
    printf("t*************\n");
    printf("t这是一个利息计算器，帮你理财哦\n");
    printf("t当前定期存款利率为7.95% \n");
    printf("t当前活期存款为：0.72% \n");
    printf("t************* \n");
    printf("请输入存款的金额：\n");
    scanf("%f",&mon);
    printf("\n请输入存款年数：");
    scanf("%d",&year);
    printf("\n请输入存款类型1代表活期，2代表定期");
    scanf("%d",&type);
    if (type==1)
{
	float a,b=0.0072;
	a=year;
	mon=mon*(1+a*b);
	printf("%f\n",mon);
}
    else
{
	float a=0.0795,b;
	b=year;
	mon=mon*(1+a*b);
	printf("%f\n",mon);
 } 
    
    return 0;
 } 


