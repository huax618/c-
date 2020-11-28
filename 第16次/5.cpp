#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int prime(int p);
int PrimeSum(int m, int n);

int main()
{
	int m, n, p;

	scanf("%d %d", &m, &n);
	printf("Sum of ( ");
	for (p = m; p <= n; p++) {
		if (prime(p) != 0)
			printf("%d ", p);
	}
	printf(") = %d\n", PrimeSum(m, n));

	return 0;
}
int prime(int p)
{
	int i;
	if (p <= 1)
	{
		return 0;
	}
	else if (p == 2)
	{
		return 1;
	}
	else if (p>2)
	{
		for (i = 2; i<p; i++)
		{
			if (p%i == 0)
			{
				return 0;
			}
			else if (i>p)
			{
				return 1;
			}
		}
	}
	return 1;
}

int PrimeSum(int m, int n)
{
	int i;
	int sum = 0;
	for (i = m; i<n; i++)
	{
		if (prime(i) != 0)
			sum = sum + i;
	}
	return sum;
}