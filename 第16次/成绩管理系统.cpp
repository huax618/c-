#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void cover();
void input();
void snow();
void compute();
void pass();
void fail();
int main(int argc, char *argv[])
{
	int i = 0;
	cover();
	while (i);
	{
		scanf("%d", &i);
		switch (i)
		{
		case 0:snow(); break;            //ȫ���ɼ����
		case 1:compute(); break;         //��ƽ��ֵ����߷֣���ͷ�
		case 2:pass(); break;            //�������ʣ�������
		case 3:fail(); break;            //������������
		default: printf("ллʹ�ã��ټ�");
		}
	}

	printf("��������ɣ�лл����ʹ�á�");
}

void cover()
{
	printf("��ӭ�����ɼ���ѯ���ġ�");
}


void snow()
{
	int arr[1000];
	int n;
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
void compute()
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
	printf("ƽ��ֵΪ��%.2lf", p);
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
	printf("��߷֣�%d����ͷ֣�%d\n", arr[0], arr[n - 1]);
}

void pass()
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
	printf("������Ϊ��%.2lf\n", sum);
	for (i = 0; i < n; i++)
	{
		if (arr[i] >= 90)
		{
			k++;
		}
	}
	sum1 = 1.0*k / n;
	printf("������Ϊ��%.2lf\n", sum1);
}

void fail()
{
	int n;
	scanf("%d", &n);
	int i;
	int count=0;
	int arr[1000];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] < 60)
		{
			printf("%d ", arr[i]);
			count++;
		}
	}
	printf("\n");
	printf("�������������%d\n", count);
}






