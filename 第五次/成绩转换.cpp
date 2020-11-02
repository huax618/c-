#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a/10)
	{
		case 10: printf("A",a); break;
		case 9: printf("A",a); break;
		case 8: printf("B",a); break;
		case 7: printf("C",a); break;
		case 6: printf("D",a); break;
		default: printf("E",a); break;
	}
		return 0;
}
	

