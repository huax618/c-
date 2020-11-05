#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("为你计算整数加，减，乘，除，余的运算： \n");
	scanf("%d%d",&b,&c);
	printf("--------------------------\n");
	printf("==计==算==机==主==菜==单==\n");
	printf("--------------------------\n");
	printf("--------1  加法-----------\n");
	printf("--------2  减法-----------\n");
	printf("--------3  乘法-----------\n");
	printf("--------4  除法-----------\n");
	printf("--------5  余法-----------\n");
	printf("--------6  退出-----------\n");
	printf("请输入你想要用什么方式来运算：\n");
	scanf("%d",&a);
	if(a == 1)
	{
		d=b+c;
		printf("%d",d);
	}
	else if (a == 2)
		{
			d=b-c;
			printf("%d",d);
		}
	else if (a == 3)
		{
			d=b*c;
			printf("%d",d);
		}
	else if (a == 4)
		{
			d=b/c;
			printf("%d",d);
		}
	else if (a == 5)
		{
			d=b%c;
			printf("%d",d);
		}
	else 
			printf("退出"); 
	
	return 0;
	
 } 
