#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d){
		printf("�������ĸ�������\n");
		printf("����1������2������3������4����������%d��",a);
	}
	else if(b>a && b>c && b>d){
		printf("�������ĸ�������\n");
		printf("����1������2������3������4����������%d��",b);
	}
		
	else if(c>a && c>b && c>d){
		printf("�������ĸ�������\n");
		printf("����1������2������3������4����������%d��",c);
	}
		
	else if(d>a && d>b && d>c){
		printf("�������ĸ�������\n");
		printf("����1������2������3������4����������%d��",d);
	}
		
	return 0;
}
