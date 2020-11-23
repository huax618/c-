#include<stdio.h>
int main()

{
	long int arr[100];
	long int n, x;
	long int  i,j;
	scanf("%d%d", &n, &x);
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (j= 0; j<n; j++)
	{
		if (arr[j] == x)
			printf("%d", arr[j]);
			break;
	if (j == n)
	{
		printf("NotFound");
	}

}

}
