#include<stdio.h>
void fun()
{
	int a,c,e,g,sum1;
	float b,d,f,h,sum2;
	scanf("%d%f\n",&a,&b);
	scanf("%d%f\n",&c,&d);
	scanf("%d%f\n",&e,&f);
	scanf("%d%f",&g,&h);
	sum1 = a+c+e+g ;
	sum2 = b+d+f+h ;
printf("���������Щ������Щ�����������\n");
printf("�� ���� �� ���� ��   ���   ��\n");
printf("���������੤�����੤����������\n");
printf("��һ���ȩ� %d�� %.2f��\n",a,b);
printf("���������੤�����੤����������\n");
printf("�������ȩ� %d�� %.2f��\n",c,d);
printf("���������੤�����੤����������\n");
printf("�������ȩ� %d�� %.2f��\n",e,f);
printf("���������੤�����੤����������\n");
printf("���ļ��ȩ� %d�� %.2f��\n",g,h);
printf("���������੤�����੤����������\n");
printf("�� ȫ�� �� %d�� %.2f��\n",sum1,sum2);
printf("���������ة������ة�����������\n");



}
int main()
{
	fun();
	return 0;
}
 
