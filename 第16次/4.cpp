#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[100];
	int arr1[100];
	int i,j,k;
	for (i = 0; i < n; i++);
	{
		scanf("%d", &arr[i]);
	}
	for (j= 0; j < n; j++)
	{
		scanf("%d", &arr1[j]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i] = arr1[j]);
			printf("%d", arr[i]);
		}
	}
	return 0;
}