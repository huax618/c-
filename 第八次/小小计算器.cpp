#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Ϊ����������ӣ������ˣ�����������㣺 \n");
	scanf("%d%d",&b,&c);
	printf("--------------------------\n");
	printf("==��==��==��==��==��==��==\n");
	printf("--------------------------\n");
	printf("--------1  �ӷ�-----------\n");
	printf("--------2  ����-----------\n");
	printf("--------3  �˷�-----------\n");
	printf("--------4  ����-----------\n");
	printf("--------5  �෨-----------\n");
	printf("--------6  �˳�-----------\n");
	printf("����������Ҫ��ʲô��ʽ�����㣺\n");
	scanf("%d",&a);
	if(a == 1)
	{
		d=b+c;
		printf("%d",d);
	}
	else if (a == 2)
		{
			d=b-c;
			printf("%d",d);
		}
	else if (a == 3)
		{
			d=b*c;
			printf("%d",d);
		}
	else if (a == 4)
		{
			d=b/c;
			printf("%d",d);
		}
	else if (a == 5)
		{
			d=b%c;
			printf("%d",d);
		}
	else 
			printf("�˳�"); 
	
	return 0;
	
 } 
