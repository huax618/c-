#include<stdio.h>

int main()
{
	long int n;
	double sum=0,sum1=0;
	scanf("%d",&n);
	int arr[100];
	int i,count=0;
	if (n > 10 || n < 1)
	{
		printf("Invalid.\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
			sum1 += arr[i];
		}
		sum = 1.0 * sum1 / n;
		printf("%.2f\n", sum);
		for (i = 0; i < n; i++)
		{
			if (arr[i]>sum)
			{
				printf("%d ", arr[i]);
                count++;
			}
		}
        if(count==0)printf("\n");
	}
		return 0;
}

