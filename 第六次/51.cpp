#include<stdio.h>
int main()
{
	int year,year1,year2=0;
	scanf("%d", &year);
	if (year <= 2000 || year>2100 )
		printf("Invalid year!\n");
	else if(year>2000&&year<=2100)
	{
		for (year1=2001;year1<=year;year1++)
		{
			if (year1 % 4 == 0 && year1 % 100 != 0 || year1%400==0)
			{
				year2=1;
				printf("%d\n", year1);
			}
		}	
		if(year2==0)
			printf("None"); 
	}
	return 0;
}
