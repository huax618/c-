#include<stdio.h>
int main()
{
int arr[6]={10,13,9,20,5,18};
int i,n;
scanf("%d",&n);
for(i=0;i<6;i++)
{
     if(n!=arr[i])
{
	printf("%d ",arr[i]);
}
     else 
     {
	printf("查无此元素 "); 
      }
}
return 0;
}

