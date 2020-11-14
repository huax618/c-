#include<stdio.h>
#include<math.h>
int main()
{
	int m,k,free=0,day=0;
	int i;
	scanf("%d%d",&m,&k);
	while(m!=0)
	{
		m--;
		free++;
		day++;
		if(free==k)
		{
			m++;
			free=0;
		}
	}
	printf("%d",day);
	return 0;
}
