#include<stdio.h>
int main()
{
	int arr[10];
	int s = 0;
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 0)
		{
			s += arr[i];
		}
	}
	printf("s=%d\n", s);
	return 0;
}
