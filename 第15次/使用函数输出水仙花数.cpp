#include <stdio.h>

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
    int temp=number,wei,i,add,num=number,sum=0;
    for(wei=1;temp>=10;wei++)
    {
        temp/=10;
    }
    for(;num>=1;num/=10)
    {
        temp=num%10;
        add=1;
        for(i=0;i<wei;i++)
        {
            add*=temp;
        }
        sum+=add;
    }
    if(sum==number)return 1;
    else return 0;
}
void PrintN( int m, int n )
{
    for(m++;m<n;m++)
    {
        if(narcissistic(m))printf("%d\n",m);
    }
}
