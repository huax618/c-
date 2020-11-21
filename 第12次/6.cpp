#include<stdio.h>
int main()
{
	int arr[6]={10,13,9,20,5,18};
	int i,j,k;
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 		if(arr[j]>arr[j+1])
	 		{
	 			k=arr[j];
	 			arr[j]=arr[j+1];
	 			arr[j+1]=k;
			 }
		 }
	 }
	 for(i=0;i<6;i++)
	 {
	 	printf("%d ",arr[i]);
	 }
	return 0;
}
