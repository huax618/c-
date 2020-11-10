#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int lower = 0, upper = 0,F;
	double C;
	scanf("%d%d", &lower, &upper);
	if (lower > upper)
		printf("Invalid.\n");
	else
	{
		printf("fahr celsius\n");
		for (F = lower; F <= upper; F += 2)
		{
			C = 5.0 * (F - 32) / 9;
			printf("%d   %.1lf\n", F, C);
		}
	}
	return 0;
}