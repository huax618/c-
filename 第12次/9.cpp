#include<stdio.h>
int main()
{
	
   int a=2,b=9;
   do{
    b-=a;
    a++;
     }while(b--<0);
    printf("a=%d,b=%d\n",a,b);
}

