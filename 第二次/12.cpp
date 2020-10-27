#include<stdio.h>
int main()
{
	double faHeight,moHeight,baby,teen;	
	int m,X,one,two;
	
	scanf("%lf%lf",&faHeight,&moHeight);
	printf("你的性别是： 1.男    2.女 \n");
	scanf("%d",&m);
	if (m == 1)
	{
		baby=(faHeight + moHeight)* 0.54;		
	}
	else 
    {
		baby=(faHeight * 0.923 + moHeight) / 2;
		
	}
    
	printf("喜欢和不喜欢的:  1.喜欢     2.不喜欢\n");
	scanf("%d",&X);
	if (X == 1) 
	{
		printf("喜欢一种还是喜欢两种：  一. 1     二. 2 \n");
		scanf("%d",&one);
		if (one == 1)
		{
			printf("喜爱锻炼还是良好习惯：  1.锻炼   2.良好习惯  \n");
			scanf("%d",&two);
			if(two == 1)
				{
					teen=baby + (baby*0.02);
					printf("%.2lf",teen);
				}
			else 
			{
				teen=baby + (baby*0.015);
				printf("%.2lf",teen);
			}
		}
		else 
		{
			teen=baby + (baby*0.035);
			printf("%.2lf",teen);
		}
}
	else 
		printf("%.lf",baby);
	return 0;
}
	
	
