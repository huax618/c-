#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, sum=10, sum1;
	double b;
	scanf("%lf%d", &b, &a);
	if (b <= 3){

	}
	else if (b>3 && b <= 10){
		sum = 10 + 2 * (b - 3)+0.5;
		printf("%d", sum);
	}
	else if (b>10){
		sum = 10 + 14 + 3 * (b - 10)+0.5;
		printf("%d", sum);
	}
	if (a<5){
		sum1 = sum;
		printf("%d", sum1);
	}
	else{
		sum1 = sum + a / 5 * 2;
		printf("%d", sum1);
	}

	return 0;
}