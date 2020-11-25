#include<stdio.h>
int main()

{
	long int n, x;
	int  i,k=0;
	scanf("%d%d", &n, &x);
    int arr[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == x)
		{
			printf("%d\n", i);
			k = 1;
		}
	}
	if (k==0)
	{
		printf("Not Found\n");
	}
	return 0;
}
