#include <stdio.h>
int main()
{
int a[5]={1,3,5,7,9},i=0,n;
printf(“输入要查找的数:”);
scanf("%d",&n);
for(i=0;i<5;i++)
{
if(n==a[i])
break;
}
if(i>=5)
printf(“要查找的数不在数组中\n”);
else
printf(“要查找的数在数组的第%d个位置\n”,i);
}
