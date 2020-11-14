# include <stdio.h>

int main()
{
	int temp;
	int pow = 1;
	int i = 1;
	int n;
	scanf(" %d", &n);
	
	temp = n;
	while (temp/10) 
	{
		temp /= 10;
		pow *= 10;
		++i;
	}   
		
	while (i)
	{
		printf("%d ", n / pow);
		n %= pow;
		pow /= 10;
		--i;
	}
	
	printf("\n");
	
 	return 0;
}

