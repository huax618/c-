#include<stdio.h>
int narcissistic( int number );
void PrintN( int m, int n );
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
int narcissistic( int number )
{
	int m,b,c,d;
	for(m=100;m<10000;m++)
	{
		b=m/100;
		c=m/10%10;
		d=m%10;
		if(m==b*b*b+c*c*c+d*d*d);
	}
	return m;
}
void PrintN( int m, int n )
{
	int i;
	if(i>m && i<n)
	{
		printf("%d",i);
	}
}

