#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	int k=0;
	int sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		sum+=n%10;
		n/=10;
		k++;
	}
	printf("%d %d\n",k,sum);
}

