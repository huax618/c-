#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));

    return 0;
}

int search( int n )
{
    int i,count=0,d1,d2,d3,m,a;

    for(m=10; m<=n; m++)
    {
        for(i=101; i<=n; i++)
        {
            if(i==m*m)
            {
                a=m*m;
                d1=a%10;
                d3=a/100;
                d2=a/10%10;
                if(d1==d2||d2==d3||d1==d3)
                {
                    count++;
                }
            }
        }

    }

    return count;
} 
