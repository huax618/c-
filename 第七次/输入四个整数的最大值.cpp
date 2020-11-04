#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d){
		printf("请输入四个整数。\n");
		printf("整数1：整数2：整数3：整数4：最大的数是%d。",a);
	}
	else if(b>a && b>c && b>d){
		printf("请输入四个整数。\n");
		printf("整数1：整数2：整数3：整数4：最大的数是%d。",b);
	}
		
	else if(c>a && c>b && c>d){
		printf("请输入四个整数。\n");
		printf("整数1：整数2：整数3：整数4：最大的数是%d。",c);
	}
		
	else if(d>a && d>b && d>c){
		printf("请输入四个整数。\n");
		printf("整数1：整数2：整数3：整数4：最大的数是%d。",d);
	}
		
	return 0;
}
