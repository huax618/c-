#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[6] = { 9, 8, 7, 6, 5, 4 };
	int i, j;
	int n;
	scanf("%d", &n);
	for (i = 0; i < 6; i++)
	{
		if (arr[i] == 7)
		{
			for (j = 0; j < 6; j++)
			{
				arr[i] = arr[i - 1];
			}
		}
		else
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}