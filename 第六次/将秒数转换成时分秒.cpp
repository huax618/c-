#include<stdio.h>
int main()
{
	short hour,min,sec,x;
	scanf("%d",&x);
	hour=x/3600;
	min=x%3600/60;
	sec=x%60;
	printf("%d:%d:%d",hour,min,sec);
	return 0;
} 
