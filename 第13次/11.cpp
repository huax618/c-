#include "stdio.h"
main(void)
{
   int j=0,i=0,k=0;//i:¹«¼¦ j:Ä¸¼¦ k:Ð¡¼¦
   int n;
   scanf("%d",&n); 
   for(j=0;j<=100;j++)
   {
       for(i=0;i<=100;i++)
       {
           for(k=0;k<=100;k++)
           {
               if(((j+i+k)==100)&&((j*3+i*5+k/3)==100)&&(k%3==0))
               {
                   printf("Ä¸¼¦:%d¹«¼¦:%d Ð¡¼¦:%d\n",j,i,k);
               }
           }
       }
   }
 
    return 0;
}
