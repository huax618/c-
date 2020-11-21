/*
 * 母鸡3元一只  公鸡5元一只 小鸡1元3只 要求100元刚好买100只鸡的买法
*/
#include <stdio.h>
 
int main(void)
{
    int i,j,k;//i:公鸡 j:母鸡 k:小鸡
 
    for(i=0;i<=20;i++)
    {
      for(j=0;j<=33;j++)
      {
         for(k=0;k<=100;k+=3)
         {
            if((i+j+k)==100 && (5*i+3*j+k/3)==100)
            {
                printf("%d %d %d\n",j,i,k);
            }
         }
      }
    }
    return 0;
}
