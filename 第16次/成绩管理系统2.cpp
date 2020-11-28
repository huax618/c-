#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int cover();
int input();
int snow();
int compute();
int pass();
int fail();
int main(int argc, char *argv[])
{
	int i = 0;
	cover();
	input();
	while (i);
	{
		scanf("%d", &i);
		switch (i)
		{
		case 0: snow(); break;
		case 1: compute(); break;
		case 2: pass(); break;
		case 3: fail(); break;
		case 4:printf("谢谢使用，再见");
		}
	}


	printf("本操作完成，谢谢您的使用。");
}

int cover()
{
	printf("欢迎来到成绩查询中心。");
	return 0;
}

int input()
{
	int arr[1000];
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	return arr[1000];
}
int snow()
{
	int arr[1000];
	int i;
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
int compute()
{
	int n;
	double p;
	int sum = 0;
	scanf("%d", &n);
	int arr[1000];
	int i, j;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	p = 1.0*sum / n;
	printf("%.2lf", p);
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i]<arr[j])
			{
				sum = arr[i];
				arr[i] = arr[j];
				arr[j] = sum;
			}
		}
	}
	printf("最高分：%d，最低分：%d\n", arr[0], arr[n - 1]);
	return 0;
}

int pass()
{
	int n;
	scanf("%d", &n);
	int i;
	int arr[1000];
	int count = 0, k = 0;
	double sum, sum1;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] >= 60)
		{
			count++;
		}
	}
	sum = 1.0*count / n;
	printf("及格率为：%.2lf\n", sum);
	for (i = 0; i < n; i++)
	{
		if (arr[i] >= 90)
		{
			k++;
		}
	}
	sum1 = 1.0*k / n;
	printf("优秀率为：%.2lf\n", sum1);
	return 0;
}

int fail()
{
	int n;
	scanf("%d", &n);
	int i;
	int arr[1000];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] < 60)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("没有不及格的人数。");
	return 0;

}