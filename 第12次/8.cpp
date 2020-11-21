#include<stdio.h>
int main()
{
	int i=5, s=0;
do {
    if (i%2) continue;
    else s += i;
   } 
   while(--i);
   return 0;
}




