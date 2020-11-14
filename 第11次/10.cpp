#include<stdio.h>
int main()
{
	int M,N,n,g,s,f=0;
	scanf("%d%d",&M,&N);
	for(n=M;n<=N;n++)
	{
		g=n%10;
		s=(n/10)%10;
		if(g%2==0&&s%2==0)
		f+=n;
	}
	printf("%d\n",f);
	return 0;
}
