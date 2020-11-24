#include<stdio.h>
int main()
{
	int k;
	scanf("%d", &k);
	int i,j;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	if (k<1 && k>10)
	{
		printf("error.");
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
			printf("%d ", arr[i]);	
		}
		printf("\n");
		for (i = 0; i < 10; i++)
		{
			if (arr[i] == k)
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
	}
	return 0;

}
