#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	long int n, x;
	scanf("%d%d", &n, &x);
	int i;
	int count = 0;
	int arr[100];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == x)
		{
			printf("%d\n", i);
			count++;
		}
	}
	if (count == 0)
		printf("Not Found\n");
	return 0;
}