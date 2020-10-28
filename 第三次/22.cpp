#include<stdio.h>
int main()
{
	char ch;
	ch=getchar();
	ch-=32;
	printf("%c,%d",ch,ch);
	return 0; 
}
