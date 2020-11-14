#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	int odds=0, Evens=0;
	for (i = 1; i<10000; i++)
	{
		int a, n = 1;
		scanf("%d", &a);
		if (a%2==1)
		{
			odds++;
		}
		else if (a%2==0)
		{
			Evens++;
		}
		else if (a == -1)
		{
			printf("Odds=%d\n", odds);
			printf("Evens=%d\n", Evens);
		}
	}
	return 0;
}
