#include<stdio.h>
int main ()
{
	int A,B,C,D,E,F;
	scanf("%d%d",&A,&B);
	C=A+B;
	D=A-B;
	E=A*B;
	F=A/B;
	printf("%d + %d = %d\n",A,B,C);
	printf("%d - %d = %d\n",A,B,D);
	printf("%d * %d = %d\n",A,B,E);
	printf("%d / %d = %d\n",A,B,F);
	return 0;
}

