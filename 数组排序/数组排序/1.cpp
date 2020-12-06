#define _CRT_SECURE_NO_WARNINGS 1



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

int MaxDayMonth(int year, int month)
{
	int a = 0;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		a = 1;
	if (year>0 && month>0 && month <= 12)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			month = 31;
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			month = 30;
		else if (month == 2 && a == 0)
			month = 28;
		else if (month == 2 && a == 1)
			month = 29;
		return month;
	}
	else
	{
		return 0;
	}
}