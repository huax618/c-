#include <stdio.h>
int main()
{
int a[5]={1,3,5,7,9},i=0,n;
printf(������Ҫ���ҵ���:��);
scanf("%d",&n);
for(i=0;i<5;i++)
{
if(n==a[i])
break;
}
if(i>=5)
printf(��Ҫ���ҵ�������������\n��);
else
printf(��Ҫ���ҵ���������ĵ�%d��λ��\n��,i);
}
