#include<stdio.h>
int main()
{
	float Tall,w;
	scanf("%f",&Tall);
	w = (Tall-100)*0.9;
	printf("请输入您的身高(cm)：您的标准体重%.1f公斤。",w);
	return 0;
}
