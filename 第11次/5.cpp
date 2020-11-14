#include <stdio.h>
#define N 10000
int main()
{
    long n, temp;
    long mask=1;
    scanf("%ld", &n);
    temp = n;
    while(temp/10 != 0)
	{
        mask *= 10;
        temp /= 10;
    }
    while(mask!=0)
	{
        printf("%d ", n/mask);
        n %= mask;
        mask /= 10;
    }

    return 0;
}

