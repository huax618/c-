#include <stdio.h>
#include <math.h>
/* ��Ĵ��뽫��Ƕ������ */
int main(void)
{
    int money, year;
    double interest, rate;
	scanf("%d%d%lf",&money,&year,&rate);
	interest = money*pow(1+rate,year)-money;
    printf("interest = %.2f\n", interest);
    return 0;
}
