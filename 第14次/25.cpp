#include<stdio.h>
int main()
{
	int i,n,count=0,sum=0;
	double ave;
	int a[10]; //括号里面要为数！
	scanf("%d",&n);
	if(n>10||n<1) printf("Invalid.");
	else{ //这个括号不能省！！！
		for(i=0;i<n;i++){ //i从0开始！
		scanf("%d",&a[i]); //给数组元素输入数字
		sum=sum+a[i];
	}
	ave=1.0*sum/n;
	printf("%.2f\n",ave);
	for(i=0;i<n;i++){
		if(a[i]>ave){
			printf("%d ",a[i]);
			count++;
		}
	}
	if(count==0) printf("\n");
	}
	return 0;
}
