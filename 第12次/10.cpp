/*
 * ĸ��3Ԫһֻ  ����5Ԫһֻ С��1Ԫ3ֻ Ҫ��100Ԫ�պ���100ֻ������
*/
#include <stdio.h>
 
int main(void)
{
    int i,j,k;//i:���� j:ĸ�� k:С��
 
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
