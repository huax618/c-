#include<stdio.h>
int main()
{
	int n,m,s,t;
	scanf("%d\n",&n);
	scanf("%d\n",&m);
	scanf("%d\n",&s);
	scanf("%d",&t);
	if(n >= 90 && n<=100)
		printf("A\n");
	else if(n >= 80 && n<90)
		printf("B\n");
	else if (n >=70 && n< 80)
		printf("C\n");
	else if (n >= 60 && n<70)
		printf("D\n");
	else 
		printf("E\n");
	
	if(m >= 90 && m<=100)
		printf("A\n");
	else if(m >= 80 && m<90)
		printf("B\n");
	else if (m >=70 && m< 80)
		printf("C\n");
	else if (m >= 60 && m<70)
		printf("D\n");
	else 
		printf("E\n");
		
	if(s >= 90 && s<=100)
		printf("A\n");
	else if(s >= 80 && s<90)
		printf("B\n");
	else if (s >=70 && s< 80)
		printf("C\n");
	else if (s >= 60 && s<70)
		printf("D\n");
	else 
		printf("E\n");
	
	if(t >= 90 && t<=100)
		printf("A\n");
	else if(t >= 80 && t<90)
		printf("B\n");
	else if (t >=70 && t< 80)
		printf("C\n");
	else if (t >= 60 && t<70)
		printf("D\n");
	else 
		printf("E\n");
	
	return 0;
}
