#include <stdio.h>
int main()
{
	int a[6]={10,13,9,20,5,18};
	int i=0,n;
 	printf(����Ҫ���ҵ���: );
	scanf("%d",&n);
	for(i=0;i<=5;i++)
	{
		
		if(n==a[i])
		printf("%d",n);
		
	}
	if(i>5)
		printf(��Ҫ���ҵ�������������\n��);
	else
		printf(��Ҫ���ҵ���������ĵ�%d��λ��\n��,i);
}
