#include<stdio.h>
int main()
{
	int x,y,s1,s2,s3,s4,s;
	scanf("%d%d",x,y);
	s1=x*y;
	s2=(x*y)/2;
	s3=(100-y)*(100-x)/2;
	s4=(100-x)*y;
	s=s1-s2-s3-s4;
	printf("%d",s);
	return 0;
} 
