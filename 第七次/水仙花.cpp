#include<stdio.h>
void fun()
{
	int a,b,c,d;
	scanf("%d",&a);
	b = a/100%10;
	c = a/10%10;
	d = a%10;
	if(b*b*b+c*c*c+d*d*d == a)
	{
		printf("Yes");
		}
	else 
	{
		printf("No");
	}
}
int main()
{
	 fun();
	return 0;
 } 
