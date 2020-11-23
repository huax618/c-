#include<stdio.h>
int main()
{
	int i,b,c,d;
	for(i=100;i<1000;i++)
	{
		b=i/100;
		c=i/10%10;
		d=i%10;
		if(i==b*b*b+c*c*c+d*d*d)
		printf("%d\n",i);
	}
	return 0;
}
