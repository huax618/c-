#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int IsSquare(int n);

int main()
{
	int n;

	scanf("%d", &n);
	if (IsSquare(n)) printf("YES\n");
	else printf("NO\n");

	return 0;
}

int IsSquare(int n)
{
	int i;
	for (i = 0; i*i < n; i++);
	return i*i == n;
}



#include <stdio.h>

int IsLeapYear(int year);
int MaxDayMonth(int year, int month);

int main()
{
	int y, m, n;
	scanf("%d%d", &y, &m);
	n = MaxDayMonth(y, m);
	printf("%d\n", n);
	return 0;
}

......

/* 你提交的代码将被嵌在这里 */