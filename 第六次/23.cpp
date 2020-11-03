#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	if(a<0)
	{
		printf("fu ");
		a=-a;
	}
	while(a)
	{
		b=a%10;
		switch(b)
		{
			case 0: printf("ling "); break;
			case 1: printf("yi ");   break;
			case 2: printf("er ");   break;
			case 3: printf("san ");  break;
			case 4: printf("si ");   break;
			case 5: printf("wu ");   break;
			case 6: printf("liu ");  break;
			case 7: printf("qi ");   break;
			case 8: printf("ba ");   break;
			case 9: printf("jiu ");  break;
					
		}
		a=a/10;
	}	
	return 0;
}
