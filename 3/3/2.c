#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int i;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int k;
		for (k = 1; k<=i ; k+=2)
		{
			printf("", i, k,i*k);
		}
		printf("\n");
	}
}